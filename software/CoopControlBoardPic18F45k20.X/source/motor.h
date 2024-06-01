#ifndef MOTOR_H
#define	MOTOR_H

#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

 /************************************/
 /*   typedef and global variables   */
 /************************************/

 
 
 
 
 /************************************/
 /*          definition              */
 /************************************/
/* associate physical pin with corresponding pin of the relay */
#define SWITCH_ON_MOTOR_RELAY()     IO_RB3_SetLow()
#define SWITCH_OFF_MOTOR_RELAY()    IO_RB3_SetHigh()

 
  /*****************************/
 /*   functions declaration   */
 /*****************************/
void MOT_SwitchOnMotor(void);
void MOT_SwitchOffMotor(void);
void MOT_manageMotorSoftwareTimer(void);


#endif	/* MOTOR_H */

