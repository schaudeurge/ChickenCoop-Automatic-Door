 /*
 * MAIN file to manage the automatic door of the chicken coop
 *  
 * @file main.c
 * @author Simon Chaudeurge
 * @date 20/03/2024
 * @version Chicken Coop Control Board Version 0.1
 * @licence ???
 * 
 * @brief The door must be open when the sun is rising, and close when it is sunset
 * the close/open order or sent to the motor by radio through the remote controller
 * we use two output of the MCU, wired to the remote controller UP and DOWN button to simulate a button press  
 * The hardware is based on a Microchip DemoBoard ("44-pin DemoBoard), populated with a MCU PIC18F45K20.
 *
*/


/***************************
*         INCLUDE          *
****************************/
#include "./driver/system/system.h"
#include "./driver/timer/tmr0.h"
#include "./driver/system/pins.h"
#include "remoteButton.h"
#include "motor.h"

/***************************
*       DEFINITION         *
****************************/
/* luminosity threshold for SunRise and SunSet detection */
// warning: take acount light from the house, street, full moon, position of the sensor, etc ...
/* with divisor of Rdown=10K :
 *  ADC = V/VREF * 1023
 *   with V = Vref*Rdown/(Rdown+Rphoto)
 * ADC = 1023 * Rdown/(Rdown+Rphoto)
 * 
 * Night luminosity at full moon (worst case) is < 5lux:
 *      => which give a photo resistor value of ~10.5K (see abacus)
 *      => ADC = 1023 * 10 / (10+10.5) = 499
 * 
 * Day luminosity with Very dark overcast (worst case) is > 100lux:
 *      => which give a photo resistor value of ~2K (see abacus)
 *      => ADC = 1023 * 10 / (10+2) = 853
 */
#define SUNRISE_ADC_THRESHOLD       650     // ADC value for threshold above which the SunRise is detected
#define SUNSET_ADC_THRESHOLD		500		// ADC value for threshold under which the SunSet is detected

#define SUN_TIME_FILTER (2*60000/MAIN_LOOP_BASE_TIME_IN_MS) // equivalent time of 2 min based on the main loop timer
// for debug usage: accelerate filter timing 
// #define SUN_TIME_FILTER (5000/MAIN_LOOP_BASE_TIME_IN_MS) // equivalent time of 5 sec based on the main loop timer

/* definition for led display */
#define LED_ARRAY_TIME_STEP     (SUN_TIME_FILTER/8)

#define NB_OF_ADC_AVG 8 // calculate the filtered Adc based on average of the last 8 conversion (simplify MCU division by chosing a base 2 multiple)
#define AVG_DIVIDER 3   // simplify MCU division by chosing a base 2 multiple: n /(2^3) = n/8

/* OnBoard press button */
#define Read_Button_SW1()   IO_SW1_GetValue()
#define BUTTON_SW1_PRESS    LOW // Pin is at low level when Bp is pressed 
#define DEBOUNCE_BP_DELAY   (100/MAIN_LOOP_BASE_TIME_IN_MS) // 100ms debounce

typedef enum
{
    DOOR_POSITION_UNKNOWN,
    DOOR_POSITION_CLOSE,
    DOOR_POSITION_OPEN
}eDoorPosition_t;

/*********************************
* PRIVATE FUNCTIONS DECLARATION  *
**********************************/
static void Timer0_OverflowCallback(void);
uint16_t getAdcFiltered(uint16_t i16uAdcUnfiltered);
bool detectSunRise(void);
bool detectSunSet(void);
void manageSoftTimerTick(void);

/*********************************
* GLOBALE VARIABLES DECLARATION  *
**********************************/
volatile bool bIsMainLoopTimingIsOver = false;
uint16_t i16uLuminosityAdcUnFiltered = 0;
uint16_t i16uLuminosityAdcFiltered = 0;
uint16_t ti16uLuminosityAdcHistory[NB_OF_ADC_AVG]={0};
eDoorPosition_t eDoorPosition = DOOR_POSITION_UNKNOWN;
uint16_t i16uCntLuminosityLow = 0;
uint16_t i16uCntLuminosityHigh = 0;

uint16_t i16uDebug = 0;

/****************************
*      MAIN APPLICATION     *
*****************************/
int main(void)
{
    static uint8_t i8uNbOfLedToSet = 0;
    static uint8_t i8uBpSw1Debounce = 0;
    static bool bBpManualPress = 0;
    uint8_t i8uBarGraphValue = 0;
    uint8_t i = 0;

    /* Initialization of hardware pin, clock and peripherals */
    SYSTEM_Initialize(); ///@todo changer config pin RemoteBp en OpenDrain
    Timer0_OverflowCallbackRegister(Timer0_OverflowCallback); // register the callback for Timer0 interrupt

    /* Enable Interrupts */
    INTERRUPT_GlobalInterruptEnable(); 
    INTERRUPT_PeripheralInterruptEnable();

    /* initialize the Adc table used for average calculation */
    for( i=0 ; i<NB_OF_ADC_AVG ; i++ )
    {   
        CLRWDT(); // periodic watchdog clear to avoid timeout reset
        //i16uLuminosityAdcUnFiltered = ADC_GetConversion(AN_POT); //for debug usage: use potentiometer instead of photo resistor
        i16uLuminosityAdcUnFiltered = ADC_GetConversion(AN_LIGHT);
        i16uLuminosityAdcFiltered = getAdcFiltered(i16uLuminosityAdcUnFiltered);
        __delay_ms(1);
    }
    
    /* -- infinite loop -- */
    while(1)
    {
        /* -- waiting for main loop timing synchronization (10ms) -- */
        while ( bIsMainLoopTimingIsOver == true )
        {
            bIsMainLoopTimingIsOver = false; // clear flag            
            CLRWDT(); // periodic watchdog clear to avoid timeout reset
            PIN_MANAGER_RefreshConfig(); // Refresh pin config for EMC robustness
            
            
            /* -- read luminosity sensor  -- */
            //i16uLuminosityAdcUnFiltered = ADC_GetConversion(AN_POT); //debug : use potentiometer instead of photo resistor
            i16uLuminosityAdcUnFiltered = ADC_GetConversion(AN_LIGHT);
            i16uLuminosityAdcFiltered = getAdcFiltered(i16uLuminosityAdcUnFiltered);
            
            /* -- detect the sun position to activate the door -- */
            if ( detectSunRise() == true )
            {
                MOT_SwitchOnMotor();  // Switch On motor power to receive the radio order and rotate        
                RBT_simulateButtonPush(REMOTE_BUTTON_UP,3,SHORT_PUSH_DURATION_IN_MS); // open the door
                eDoorPosition = DOOR_POSITION_OPEN;
            }
            else if( detectSunSet() == true )
            {
                MOT_SwitchOnMotor();  // Switch On motor power to receive the radio order and rotate
                RBT_simulateButtonPush(REMOTE_BUTTON_DOWN,3,SHORT_PUSH_DURATION_IN_MS); // close the door
                eDoorPosition = DOOR_POSITION_CLOSE;
            }
            else
            {
                /* nothing to do */
            }
                
            /* -- display the progression of luminosity threshold detection on the led array -- */
            if ( i16uCntLuminosityLow > i16uCntLuminosityHigh )
            {
                i8uNbOfLedToSet = (uint8_t) (i16uCntLuminosityLow / LED_ARRAY_TIME_STEP);
            }
            else
            {
                i8uNbOfLedToSet = (uint8_t) (i16uCntLuminosityHigh / LED_ARRAY_TIME_STEP);
            }
            i8uBarGraphValue = 0;
            if (i8uNbOfLedToSet != 0 )
            {
                for ( i=0 ; i<i8uNbOfLedToSet ; i++ )
                {
                    /* convert the Nb of led to Set to value to get bar graph effect */
                    i8uBarGraphValue += (1<<i);
                }
            }
            else{}
            DISPLAY_LED_ARRAY = i8uBarGraphValue;
                
            /* -- Keep the BP pressed for manual switch on of the motor power relay (allow manual user command) */
            if ( Read_Button_SW1() == BUTTON_SW1_PRESS )
            {                 
                /* debounce button */
                if( i8uBpSw1Debounce < DEBOUNCE_BP_DELAY )
                {
                    i8uBpSw1Debounce++;
                }
                else
                {
                    /* Button is press: swith on the relay */
                    MOT_SwitchOnMotor();
                    DISPLAY_LED_ARRAY = 0xFF; // All Led On
                    bBpManualPress = 1;
                    
                    eDoorPosition = DOOR_POSITION_UNKNOWN; // door position is now unknown because it may have been move manually
                }
            }
            else // Bp release
            {                 
                i8uBpSw1Debounce = 0; // clear debounce timing
                if ( bBpManualPress == 1 ) /* check if Bp was previously pressed */
                {
                    bBpManualPress = 0; // clear flag
                    DISPLAY_LED_ARRAY = 0x00; // All Led Off
                    MOT_SwitchOffMotor();
                }
                else{}
            }
            
            /* -- Manage software timers -- */
            manageSoftTimerTick();
            
            /* -- DEBUG FUNCTIONS -- */
#if 0
            /*debug : blink led with 1sec period */
            if(i16uDebug < (500/MAIN_LOOP_BASE_TIME_IN_MS) )
            {
                i16uDebug++;
            }
            else
            {
                i16uDebug=0;
                IO_LED1_Toggle();
            }
#endif
            
#if 0
            /* debug: apply ADC result of potentiometer on Led strip */
            DISPLAY_LED_ARRAY = (i16uLuminosityAdc & 0x00FF);
#endif            

        } // while ( bIsMainLoopTimingIsOver == true )
        
        SLEEP(); // goes into idle mode until wakeup by the next timer interrupt (cpu disabled but timer 1 and watchdog still running))
        
    } // while(1) 
}

/*********************
* PRIVATE FUNCTIONS  *
**********************/

/*********************************************************************
    @function: static void Timer0_OverflowCallback(void)
    @summary: callback function executed in timer0 overflow interrupt
    @parameters: None
    @returns: None
**********************************************************************/
static void Timer0_OverflowCallback(void)
{
    bIsMainLoopTimingIsOver = true; // use this flag the synchronize the main loop execution with fixed timing
}

/*********************************************************************
    @function: uint16_t getAdcFiltered(adc_channel_t channel)
    @summary: filter ADC value with moving average calculation
    @parameters:
            uint16_t : last ADC value to filter
    @returns: void
**********************************************************************/
uint16_t getAdcFiltered(uint16_t i16uAdcUnfiltered)
{
    static uint8_t i8uHistoryIndex = 0;
    uint16_t i16uAdcfiltered = 0;
    uint8_t i = 0;
            
    /* replace the oldest adc value by the last one */
    ti16uLuminosityAdcHistory[i8uHistoryIndex] = i16uAdcUnfiltered;
    
    /* prepare the next index for next execution of filter */
    if( i8uHistoryIndex < (uint8_t)(NB_OF_ADC_AVG-1) )
    {
        i8uHistoryIndex++;
    }
    else
    {
        i8uHistoryIndex = 0; // return to 1st index
    }
    
    /* calculate the average value */
    i16uAdcfiltered = 0;
    for(i=0; i<NB_OF_ADC_AVG ; i++)
    {
      i16uAdcfiltered +=  ti16uLuminosityAdcHistory[i];
    }
    i16uAdcfiltered = (uint16_t)(i16uAdcfiltered >> AVG_DIVIDER);
    
    return i16uAdcfiltered;
}
            
/*********************************************************************
   @function: bool detectSunRise(void)
   @summary: detect the sunrise if the Luminosity ADC is high enough
   @parameters:None
   @returns: bool true if sunrise is detected
**********************************************************************/
bool detectSunRise(void)
{
	bool bReturnVal = false; 
	
    /* detect sunrise only when the door is not already opened */
    if ( eDoorPosition != DOOR_POSITION_OPEN)
    {
        /* detect value above threshold during a minimum timer duration */
        if ( i16uLuminosityAdcFiltered > SUNRISE_ADC_THRESHOLD )
        {
            /* time filter */ 
            if ( i16uCntLuminosityHigh < SUN_TIME_FILTER )
            {
                i16uCntLuminosityHigh++;
            }
            else
            {
                /* time reach */
                bReturnVal = true;
            }
        }
        else
        {
            i16uCntLuminosityHigh = 0; // reset the time counter
        }
    }
    else
    {
        i16uCntLuminosityHigh = 0; // reset the time counter
    }
        return bReturnVal;
}
                
/*********************************************************************
   @function: bool detectSunSet(void)
   @summary: detect the sunset if the Luminosity ADC is low enough
   @parameters:None
   @returns: bool true if sunset is detected
**********************************************************************/
bool detectSunSet(void)
{
    bool bReturnVal = false; 
	
     /* detect sunrise only when the door is not already opened */
    if ( eDoorPosition != DOOR_POSITION_CLOSE)
    {
        /* detect value bellow threshold during 5 consecutive minutes */
        if ( i16uLuminosityAdcFiltered < SUNSET_ADC_THRESHOLD )
        {
            /* time filter */ 
            if ( i16uCntLuminosityLow < SUN_TIME_FILTER )
            {
                i16uCntLuminosityLow++;
            }
            else
            {
                /* time reach */
                bReturnVal = true;
            }
        }
        else
        {
            i16uCntLuminosityLow = 0; // reset the time counter
        }
    }
    else
    {
        i16uCntLuminosityLow = 0; // reset the time counter
    }
	return bReturnVal;
}

/*********************************************************************
   @function: void manageSoftTimerTick(void)
   @summary: decrement the software timeout and trig associated action when it's over
   @parameters:None
   @returns: None
**********************************************************************/
void manageSoftTimerTick(void)
{
    MOT_manageMotorSoftwareTimer(); // software timer for Motor
}