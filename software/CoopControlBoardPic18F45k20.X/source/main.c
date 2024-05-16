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

/***************************
*       DEFINITION         *
****************************/
/* luminosity threshold for SunRise and SunSet detection */
#define SUNRISE_ADC_THRESHOLD       1023    // ADC value for threshold above which the SunRise is detected
#define SUNSET_ADC_THRESHOLD		0		// ADC value for threshold under which the SunSet is detected

#define TIME_FILTER_5_MIN (5*60000/MAIN_LOOP_BASE_TIME_IN_MS) // equivalent time of 5min based on the main loop timer

/*********************************
* PRIVATE FUNCTIONS DECLARATION  *
**********************************/
static void Timer0_OverflowCallback(void);
uint16_t getAdcFiltered(adc_channel_t channel); 
bool detectSunRise(void);
bool detectSunSet(void);

/*********************************
* GLOBALE VARIABLES DECLARATION  *
**********************************/
volatile bool bIsMainLoopTimingIsOver = false;
uint16_t i16uDebug = 0;
uint16_t i16uLuminosityAdc = 0;

/****************************
*      MAIN APPLICATION     *
*****************************/
int main(void)
{
    /* Initialization of hardware pin, clock and peripherals */
    SYSTEM_Initialize(); ///@todo changer config pin RemoteBp en OpenDrain
    Timer0_OverflowCallbackRegister(Timer0_OverflowCallback); // register the callback for Timer0 interrupt

    /* Enable Interrupts */
    INTERRUPT_GlobalInterruptEnable(); 
    INTERRUPT_PeripheralInterruptEnable();

    //IO_LED5_SetHigh(); debug 
    
    /* infinite loop */
    while(1)
    {
        /* waiting for main loop timing synchronization (10ms)*/
        while ( bIsMainLoopTimingIsOver == true )
        {
            bIsMainLoopTimingIsOver = false; // clear flag            
            CLRWDT(); // periodic watchdog clear to avoid timeout reset
            PIN_MANAGER_RefreshConfig(); // Refresh pin config for EMC robustness
            
            /* debug: apply ADC result of potentiometer on Led strip */
        //    i16uDebug = ADC_GetConversion(AN_POT);
        //    LATD = (uint8_t)(i16uDebug & 0x00FF);
            
            /* read luminosity sensor */
            i16uLuminosityAdc = getAdcFiltered(AN_POT);

            if ( detectSunRise() == true )
            {
                RBT_simulateButtonPush(REMOTE_BUTTON_UP,3,SHORT_PUSH_DURATION_IN_MS); // open the door
            }
            else if( detectSunSet() == true )
            {
                RBT_simulateButtonPush(REMOTE_BUTTON_DOWN,3,SHORT_PUSH_DURATION_IN_MS); // close the door
            }
            else
            {
                /* nothing to do */
            }
                
                
                
                
            /*debug : blink led with 1sec period */
            if(i16uDebug<10)
            {
                i16uDebug++;
            }
            else
            {
                i16uDebug=0;
                IO_LED1_Toggle();
            }

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
    @summary: get ADC value from the specified channel and filter it with average value 
    @parameters:
            channel : ADC channel to convert
    @returns: void
**********************************************************************/
uint16_t getAdcFiltered(adc_channel_t channel)
{
    uint16_t debug = ADC_GetConversion(channel);
    
    /* if avg not ready , fill end of buffer with the current value ? non */
    
#if 0
    
 uint8_t i8uAdcAverageReady = 0;
 uint16_t i16uAdcResult[NB_OF_ADC_FILTER] = {0};
 
 
     // start ADC
			// wait end of conversion
			// get result: ADC = V/VREF * 1023  => V = ADC / 1023 * Vref
			// filter ADC : avg of the last 8 measures
			
			i8utAdcResult[i++] = ADC;
			if ( i >= NB_OF_ADC_FILTER )
			{
				i8uAdcAverageReady = TRUE;
				i = 0;
			}
			else{}
			
			/* process luminosity only if we have enought measure to calculate the average */
			if ( i8uAdcAverageReady == TRUE )
			{
				/* calculate the average ADC value */
				i32uAdcAverage = 0;
				for(j=0; j<NB_OF_ADC_FILTER; j++)
				{
					i32uAdcAverage += i8utAdcResult[j];
				}
#endif
    
    return debug;
}
            
/*********************************************************************
   @function: bool detectSunRise(void)
   @summary: detect the sunrise if the Luminosity ADC is high enough
   @parameters:None
   @returns: bool true if sunrise is detected
**********************************************************************/
bool detectSunRise(void)
{
    static uint16_t i16uCntLuminosityHigh = 0;
	bool bReturnVal = false; 
	 
	/* detect value above threshold during 5 consecutive minutes */
	if ( i16uLuminosityAdc > SUNRISE_ADC_THRESHOLD )
	{
		/* time filter */ 
		if ( i16uCntLuminosityHigh < TIME_FILTER_5_MIN )
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
    static uint16_t i16uCntLuminosityLow = 0;
    bool bReturnVal = false; 
	 
    /* detect value bellow threshold during 5 consecutive minutes */
 	if ( i16uLuminosityAdc < SUNSET_ADC_THRESHOLD )
	{
		/* time filter */ 
		if ( i16uCntLuminosityLow < TIME_FILTER_5_MIN )
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
	return bReturnVal;
}