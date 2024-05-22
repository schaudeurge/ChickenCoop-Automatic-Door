/* 
 * @file remoteButton.c
 * @author Simon Chaudeurge
 * @date 21/03/2024
 * @version 1.0
 * 
 * @brief drive the press of the button on the remote controller 
 */


#include <xc.h>
#include "remoteButton.h"
#include "./driver/system/system.h"


/************************************/
/*          definition              */
/************************************/
/* associate phyisical pin with corresponding button */
#define PIN_BUTTON_UP_SET_LOW()        {\
                                        IO_RB1_SetLow();\
                                        IO_RB1_SetDigitalOutput();\
                                       }   // configure pin as output low

#define PIN_BUTTON_UP_SET_HIGH_Z()      {\
                                            IO_RB1_SetLow();\
                                            IO_RB1_SetDigitalInput();\
                                        }    // configure pin as input to get open drain high impedance
                                            
#define PIN_BUTTON_DOWN_SET_LOW()       {\
                                            IO_RB2_SetLow();\
                                            IO_RB2_SetDigitalOutput();\
                                        }  // configure pin as output low
                                            
#define PIN_BUTTON_DOWN_SET_HIGH_Z()    {\
                                            IO_RB2_SetLow();\
                                            IO_RB2_SetDigitalInput();\
                                        }   // configure pin as input to get open drain high impedance


/***********************************/
/*         Global functions        */
/***********************************/

/**
    @function: void RBT_simulateButtonPush(eButtonId);
    @summary: drive the hardware pin to simulate a press on the button 
    @parameters:
            eRemoteButtonId_t : id of the button 
            i8uNbOfPush : nbr of successive push to realize
            i16uPushDuration: duration of each push </p>
    @returns: void
 */
void RBT_simulateButtonPush(eRemoteButtonId_t eButtonId , uint8_t i8uNbOfPush, uint16_t i16uPushDuration )
{
    uint8_t i = 0;
    uint8_t i8uBackupLedArray = 0;
    
    i8uBackupLedArray = DISPLAY_LED_ARRAY; // save Led status before modify it
    
    for (i=0; i<i8uNbOfPush; i++)
    {
        DISPLAY_LED_ARRAY = 0x00; // All led Off
        switch (eButtonId)
        {
            /* set pin low to simulate of push on the corresponding button */
            case REMOTE_BUTTON_UP:
                PIN_BUTTON_UP_SET_LOW();
                break;

            case REMOTE_BUTTON_DOWN:
                PIN_BUTTON_DOWN_SET_LOW();
                break;

            default:
                break;

        }
        CLRWDT(); // clear watchdog before delay to avoid reset
      //  DELAY_milliseconds(i16uPushDuration);
        __delay_ms(DELAY_AFTER_PUSH_IN_MS);
        DISPLAY_LED_ARRAY = 0xFF; // All Led On

        /* release hardware pin (high Z) */
        PIN_BUTTON_UP_SET_HIGH_Z();
        PIN_BUTTON_DOWN_SET_HIGH_Z();	

        CLRWDT(); // clear watchdog before delay to avoid reset
        __delay_ms(DELAY_AFTER_PUSH_IN_MS);
        
        __delay_ms(100);
        
    }
    DISPLAY_LED_ARRAY = i8uBackupLedArray; // restore previous value of the led
}

/***********************************/
/*         Private functions        */
/***********************************/

