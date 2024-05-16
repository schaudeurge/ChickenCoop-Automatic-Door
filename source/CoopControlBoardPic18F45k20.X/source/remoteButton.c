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
#define PIN_BUTTON_UP_SET_LOW()     IO_RB1_SetLow()
#define PIN_BUTTON_UP_SET_HIGH()    IO_RB1_SetHigh()
#define PIN_BUTTON_DOWN_SET_LOW()   IO_RB2_SetLow()
#define PIN_BUTTON_DOWN_SET_HIGH()  IO_RB3_SetHigh()


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
    
    for (i=0; i<i8uNbOfPush; i++)
    {
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
        DELAY_milliseconds(i16uPushDuration);

        /* release hardware pin (high Z) */
        PIN_BUTTON_UP_SET_HIGH();
        PIN_BUTTON_DOWN_SET_HIGH();	

        __delay_ms(DELAY_AFTER_PUSH_IN_MS);
    }
}

/***********************************/
/*         Private functions        */
/***********************************/

