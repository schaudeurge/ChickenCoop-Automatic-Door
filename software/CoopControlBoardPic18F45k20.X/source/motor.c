/* 
 * @file motor.c
 * @author Simon Chaudeurge
 * @date 21/03/2024
 * @version 1.0
 * 
 * @brief manage the motor (power only has the motor manage itself the direction and end of movement from radio remote control)
 */


#include <xc.h>
#include "./driver/system/system.h"
#include "motor.h"


/************************************/
/*          definition              */
/************************************/

/* software delay based on the main loop execution timing */
#define DELAY_TICK_30SEC   (uint16_t)(30000/MAIN_LOOP_BASE_TIME_IN_MS)

/*********************************
* GLOBALE VARIABLES DECLARATION  *
**********************************/
uint16_t i16uMotorSwitchDelay = 0;

/***********************************/
/*         Global functions        */
/***********************************/

/**
    @function: void MOT_SwitchOnMotor(void)
    @summary: switch on the motor power supply via a relay 
              (when not powered the motor is unable to receive radio order from the remote control)
    @parameters: None
    @returns: void
 */
void MOT_SwitchOnMotor(void)
{
    SWITCH_ON_MOTOR_RELAY(); // Switch On motor power to receive the radio order and rotate
    i16uMotorSwitchDelay = DELAY_TICK_30SEC; // start delay timer to switch Off the motor at the end of the movement
    CLRWDT(); // clear watchdog before delay to avoid reset
    __delay_ms(100); // some delay to let the motor power supply establish
}

/**
    @function: void MOT_SwitchOffMotor(void)
    @summary: switch on the motor power supply via a relay 
              (when not powered the motor is unable to receive radio order from the remote control)
    @parameters: None
    @returns: void
 */
void MOT_SwitchOffMotor(void)
{
    SWITCH_OFF_MOTOR_RELAY();
}

/**
    @function: void MOT_manageMotorSoftwareTimer(void)
    @summary: periodically called from main loop software timer tick 
              used to manage software timer relative to the motor
    @parameters: None
    @returns: void
 */
void MOT_manageMotorSoftwareTimer(void)
{
    if ( i16uMotorSwitchDelay > 0 )
    {
        SWITCH_ON_MOTOR_RELAY(); // keep the relay On
        i16uMotorSwitchDelay--;
        if ( i16uMotorSwitchDelay == 0 )
        {
            /* timeout reached : switch Off the motor power */
            MOT_SwitchOffMotor();
        }
        else{}
    }
    else{}
}

/***********************************/
/*         Private functions        */
/***********************************/

