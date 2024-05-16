#ifndef REMOTE_BUTTON_H
#define	REMOTE_BUTTON_H

#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

 /************************************/
 /*   typedef and global variables   */
 /************************************/
 typedef enum
 {
	 REMOTE_BUTTON_UP = 0,
	 REMOTE_BUTTON_DOWN,
	 NB_OF_REMOTE_BUTTON
 }eRemoteButtonId_t;
 
 
 
 // eButtonId_t eRemoteButtonId_t = REMOTE_BUTTON_UP;
 
 
 /************************************/
 /*          definition              */
 /************************************/
 /* push duration */
#define SHORT_PUSH_DURATION_IN_MS   500
#define DELAY_AFTER_PUSH_IN_MS      500
 
  /*****************************/
 /*   functions declaration   */
 /*****************************/
void RBT_simulateButtonPush(eRemoteButtonId_t eButtonId,  uint8_t i8uNbOfPush, uint16_t i16uPushDuration);
 


#endif	/* REMOTE_BUTTON_H */

