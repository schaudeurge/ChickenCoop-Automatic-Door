/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define AN_POT_TRIS                 TRISAbits.TRISA0
#define AN_POT_LAT                  LATAbits.LATA0
#define AN_POT_PORT                 PORTAbits.RA0
#define AN_POT_WPU                  WPUAbits.
#define AN_POT_OD                   ODCONAbits.
#define AN_POT_ANS                  ANSELAbits.ANS0
#define AN_POT_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define AN_POT_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define AN_POT_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define AN_POT_GetValue()           PORTAbits.RA0
#define AN_POT_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define AN_POT_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define AN_POT_SetPullup()          do { WPUAbits. = 1; } while(0)
#define AN_POT_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define AN_POT_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define AN_POT_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define AN_POT_SetAnalogMode()      do { ANSELAbits.ANS0 = 1; } while(0)
#define AN_POT_SetDigitalMode()     do { ANSELAbits.ANS0 = 0; } while(0)

// get/set RA1 aliases
#define AN_LIGHT_TRIS                 TRISAbits.TRISA1
#define AN_LIGHT_LAT                  LATAbits.LATA1
#define AN_LIGHT_PORT                 PORTAbits.RA1
#define AN_LIGHT_WPU                  WPUAbits.
#define AN_LIGHT_OD                   ODCONAbits.
#define AN_LIGHT_ANS                  ANSELAbits.ANS1
#define AN_LIGHT_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define AN_LIGHT_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define AN_LIGHT_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define AN_LIGHT_GetValue()           PORTAbits.RA1
#define AN_LIGHT_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define AN_LIGHT_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define AN_LIGHT_SetPullup()          do { WPUAbits. = 1; } while(0)
#define AN_LIGHT_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define AN_LIGHT_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define AN_LIGHT_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define AN_LIGHT_SetAnalogMode()      do { ANSELAbits.ANS1 = 1; } while(0)
#define AN_LIGHT_SetDigitalMode()     do { ANSELAbits.ANS1 = 0; } while(0)

// get/set RA2 aliases
#define IO_RA2_TRIS                 TRISAbits.TRISA2
#define IO_RA2_LAT                  LATAbits.LATA2
#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_WPU                  WPUAbits.
#define IO_RA2_OD                   ODCONAbits.
#define IO_RA2_ANS                  ANSELAbits.ANS2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()          do { WPUAbits. = 1; } while(0)
#define IO_RA2_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define IO_RA2_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define IO_RA2_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define IO_RA2_SetAnalogMode()      do { ANSELAbits.ANS2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()     do { ANSELAbits.ANS2 = 0; } while(0)

// get/set RA3 aliases
#define IO_RA3_TRIS                 TRISAbits.TRISA3
#define IO_RA3_LAT                  LATAbits.LATA3
#define IO_RA3_PORT                 PORTAbits.RA3
#define IO_RA3_WPU                  WPUAbits.
#define IO_RA3_OD                   ODCONAbits.
#define IO_RA3_ANS                  ANSELAbits.ANS3
#define IO_RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_RA3_GetValue()           PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_RA3_SetPullup()          do { WPUAbits. = 1; } while(0)
#define IO_RA3_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define IO_RA3_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define IO_RA3_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define IO_RA3_SetAnalogMode()      do { ANSELAbits.ANS3 = 1; } while(0)
#define IO_RA3_SetDigitalMode()     do { ANSELAbits.ANS3 = 0; } while(0)

// get/set RA4 aliases
#define IO_RA4_TRIS                 TRISAbits.TRISA4
#define IO_RA4_LAT                  LATAbits.LATA4
#define IO_RA4_PORT                 PORTAbits.RA4
#define IO_RA4_WPU                  WPUAbits.
#define IO_RA4_OD                   ODCONAbits.
#define IO_RA4_ANS                  ANSELAbits.
#define IO_RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_RA4_GetValue()           PORTAbits.RA4
#define IO_RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IO_RA4_SetPullup()          do { WPUAbits. = 1; } while(0)
#define IO_RA4_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define IO_RA4_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define IO_RA4_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define IO_RA4_SetAnalogMode()      do { ANSELAbits. = 1; } while(0)
#define IO_RA4_SetDigitalMode()     do { ANSELAbits. = 0; } while(0)

// get/set RA5 aliases
#define IO_RA5_TRIS                 TRISAbits.TRISA5
#define IO_RA5_LAT                  LATAbits.LATA5
#define IO_RA5_PORT                 PORTAbits.RA5
#define IO_RA5_WPU                  WPUAbits.
#define IO_RA5_OD                   ODCONAbits.
#define IO_RA5_ANS                  ANSELAbits.ANS4
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()          do { WPUAbits. = 1; } while(0)
#define IO_RA5_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define IO_RA5_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define IO_RA5_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define IO_RA5_SetAnalogMode()      do { ANSELAbits.ANS4 = 1; } while(0)
#define IO_RA5_SetDigitalMode()     do { ANSELAbits.ANS4 = 0; } while(0)

// get/set RA6 aliases
#define IO_RA6_TRIS                 TRISAbits.TRISA6
#define IO_RA6_LAT                  LATAbits.LATA6
#define IO_RA6_PORT                 PORTAbits.RA6
#define IO_RA6_WPU                  WPUAbits.
#define IO_RA6_OD                   ODCONAbits.
#define IO_RA6_ANS                  ANSELAbits.
#define IO_RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_RA6_GetValue()           PORTAbits.RA6
#define IO_RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define IO_RA6_SetPullup()          do { WPUAbits. = 1; } while(0)
#define IO_RA6_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define IO_RA6_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define IO_RA6_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define IO_RA6_SetAnalogMode()      do { ANSELAbits. = 1; } while(0)
#define IO_RA6_SetDigitalMode()     do { ANSELAbits. = 0; } while(0)

// get/set RA7 aliases
#define IO_RA7_TRIS                 TRISAbits.TRISA7
#define IO_RA7_LAT                  LATAbits.LATA7
#define IO_RA7_PORT                 PORTAbits.RA7
#define IO_RA7_WPU                  WPUAbits.
#define IO_RA7_OD                   ODCONAbits.
#define IO_RA7_ANS                  ANSELAbits.
#define IO_RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IO_RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IO_RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IO_RA7_GetValue()           PORTAbits.RA7
#define IO_RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IO_RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IO_RA7_SetPullup()          do { WPUAbits. = 1; } while(0)
#define IO_RA7_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define IO_RA7_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define IO_RA7_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define IO_RA7_SetAnalogMode()      do { ANSELAbits. = 1; } while(0)
#define IO_RA7_SetDigitalMode()     do { ANSELAbits. = 0; } while(0)

// get/set RB0 aliases
#define IO_SW1_TRIS                 TRISBbits.TRISB0
#define IO_SW1_LAT                  LATBbits.LATB0
#define IO_SW1_PORT                 PORTBbits.RB0
#define IO_SW1_WPU                  WPUBbits.WPUB0
#define IO_SW1_OD                   ODCONBbits.
#define IO_SW1_ANS                  ANSELBbits.ANS12
#define IO_SW1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_SW1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_SW1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_SW1_GetValue()           PORTBbits.RB0
#define IO_SW1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_SW1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_SW1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_SW1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_SW1_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_SW1_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_SW1_SetAnalogMode()      do { ANSELBbits.ANS12 = 1; } while(0)
#define IO_SW1_SetDigitalMode()     do { ANSELBbits.ANS12 = 0; } while(0)

// get/set RB1 aliases
#define IO_RB1_TRIS                 TRISBbits.TRISB1
#define IO_RB1_LAT                  LATBbits.LATB1
#define IO_RB1_PORT                 PORTBbits.RB1
#define IO_RB1_WPU                  WPUBbits.WPUB1
#define IO_RB1_OD                   ODCONBbits.
#define IO_RB1_ANS                  ANSELBbits.ANS10
#define IO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_RB1_GetValue()           PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_RB1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_RB1_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB1_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB1_SetAnalogMode()      do { ANSELBbits.ANS10 = 1; } while(0)
#define IO_RB1_SetDigitalMode()     do { ANSELBbits.ANS10 = 0; } while(0)

// get/set RB2 aliases
#define IO_RB2_TRIS                 TRISBbits.TRISB2
#define IO_RB2_LAT                  LATBbits.LATB2
#define IO_RB2_PORT                 PORTBbits.RB2
#define IO_RB2_WPU                  WPUBbits.WPUB2
#define IO_RB2_OD                   ODCONBbits.
#define IO_RB2_ANS                  ANSELBbits.ANS8
#define IO_RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_RB2_GetValue()           PORTBbits.RB2
#define IO_RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_RB2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_RB2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_RB2_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB2_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB2_SetAnalogMode()      do { ANSELBbits.ANS8 = 1; } while(0)
#define IO_RB2_SetDigitalMode()     do { ANSELBbits.ANS8 = 0; } while(0)

// get/set RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.
#define IO_RB3_ANS                  ANSELBbits.ANS9
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANS9 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANS9 = 0; } while(0)

// get/set RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.
#define IO_RB4_ANS                  ANSELBbits.ANS11
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANS11 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANS11 = 0; } while(0)

// get/set RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.
#define IO_RB5_ANS                  ANSELBbits.
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB6 aliases
#define IO_ICSPDAT_TRIS                 TRISBbits.TRISB6
#define IO_ICSPDAT_LAT                  LATBbits.LATB6
#define IO_ICSPDAT_PORT                 PORTBbits.RB6
#define IO_ICSPDAT_WPU                  WPUBbits.WPUB6
#define IO_ICSPDAT_OD                   ODCONBbits.
#define IO_ICSPDAT_ANS                  ANSELBbits.
#define IO_ICSPDAT_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_ICSPDAT_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_ICSPDAT_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_ICSPDAT_GetValue()           PORTBbits.RB6
#define IO_ICSPDAT_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_ICSPDAT_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_ICSPDAT_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_ICSPDAT_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_ICSPDAT_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_ICSPDAT_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_ICSPDAT_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define IO_ICSPDAT_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB7 aliases
#define IO_ICSPCLK_TRIS                 TRISBbits.TRISB7
#define IO_ICSPCLK_LAT                  LATBbits.LATB7
#define IO_ICSPCLK_PORT                 PORTBbits.RB7
#define IO_ICSPCLK_WPU                  WPUBbits.WPUB7
#define IO_ICSPCLK_OD                   ODCONBbits.
#define IO_ICSPCLK_ANS                  ANSELBbits.
#define IO_ICSPCLK_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_ICSPCLK_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_ICSPCLK_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_ICSPCLK_GetValue()           PORTBbits.RB7
#define IO_ICSPCLK_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_ICSPCLK_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_ICSPCLK_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_ICSPCLK_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_ICSPCLK_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_ICSPCLK_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_ICSPCLK_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define IO_ICSPCLK_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RC0 aliases
#define IO_RC0_TRIS                 TRISCbits.TRISC0
#define IO_RC0_LAT                  LATCbits.LATC0
#define IO_RC0_PORT                 PORTCbits.RC0
#define IO_RC0_WPU                  WPUCbits.
#define IO_RC0_OD                   ODCONCbits.
#define IO_RC0_ANS                  ANSELCbits.
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_RC0_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC0_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC0_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC0_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC0_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC0_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC1 aliases
#define IO_RC1_TRIS                 TRISCbits.TRISC1
#define IO_RC1_LAT                  LATCbits.LATC1
#define IO_RC1_PORT                 PORTCbits.RC1
#define IO_RC1_WPU                  WPUCbits.
#define IO_RC1_OD                   ODCONCbits.
#define IO_RC1_ANS                  ANSELCbits.
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC1_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC1_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC1_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC1_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC1_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC2 aliases
#define IO_RC2_TRIS                 TRISCbits.TRISC2
#define IO_RC2_LAT                  LATCbits.LATC2
#define IO_RC2_PORT                 PORTCbits.RC2
#define IO_RC2_WPU                  WPUCbits.
#define IO_RC2_OD                   ODCONCbits.
#define IO_RC2_ANS                  ANSELCbits.
#define IO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_RC2_GetValue()           PORTCbits.RC2
#define IO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_RC2_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC2_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC2_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC2_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC2_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC2_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.
#define IO_RC3_OD                   ODCONCbits.
#define IO_RC3_ANS                  ANSELCbits.
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.
#define IO_RC4_OD                   ODCONCbits.
#define IO_RC4_ANS                  ANSELCbits.
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.
#define IO_RC5_OD                   ODCONCbits.
#define IO_RC5_ANS                  ANSELCbits.
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC6 aliases
#define IO_RC6_TRIS                 TRISCbits.TRISC6
#define IO_RC6_LAT                  LATCbits.LATC6
#define IO_RC6_PORT                 PORTCbits.RC6
#define IO_RC6_WPU                  WPUCbits.
#define IO_RC6_OD                   ODCONCbits.
#define IO_RC6_ANS                  ANSELCbits.
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC6_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC6_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC6_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC6_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC6_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC7 aliases
#define IO_RC7_TRIS                 TRISCbits.TRISC7
#define IO_RC7_LAT                  LATCbits.LATC7
#define IO_RC7_PORT                 PORTCbits.RC7
#define IO_RC7_WPU                  WPUCbits.
#define IO_RC7_OD                   ODCONCbits.
#define IO_RC7_ANS                  ANSELCbits.
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC7_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC7_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC7_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC7_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC7_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RD0 aliases
#define IO_LED0_TRIS                 TRISDbits.TRISD0
#define IO_LED0_LAT                  LATDbits.LATD0
#define IO_LED0_PORT                 PORTDbits.RD0
#define IO_LED0_WPU                  WPUDbits.
#define IO_LED0_OD                   ODCONDbits.
#define IO_LED0_ANS                  ANSELDbits.
#define IO_LED0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_LED0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_LED0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_LED0_GetValue()           PORTDbits.RD0
#define IO_LED0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_LED0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_LED0_SetPullup()          do { WPUDbits. = 1; } while(0)
#define IO_LED0_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define IO_LED0_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define IO_LED0_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define IO_LED0_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define IO_LED0_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD1 aliases
#define IO_LED1_TRIS                 TRISDbits.TRISD1
#define IO_LED1_LAT                  LATDbits.LATD1
#define IO_LED1_PORT                 PORTDbits.RD1
#define IO_LED1_WPU                  WPUDbits.
#define IO_LED1_OD                   ODCONDbits.
#define IO_LED1_ANS                  ANSELDbits.
#define IO_LED1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_LED1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_LED1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_LED1_GetValue()           PORTDbits.RD1
#define IO_LED1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_LED1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_LED1_SetPullup()          do { WPUDbits. = 1; } while(0)
#define IO_LED1_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define IO_LED1_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define IO_LED1_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define IO_LED1_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define IO_LED1_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD2 aliases
#define IO_LED2_TRIS                 TRISDbits.TRISD2
#define IO_LED2_LAT                  LATDbits.LATD2
#define IO_LED2_PORT                 PORTDbits.RD2
#define IO_LED2_WPU                  WPUDbits.
#define IO_LED2_OD                   ODCONDbits.
#define IO_LED2_ANS                  ANSELDbits.
#define IO_LED2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_LED2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_LED2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_LED2_GetValue()           PORTDbits.RD2
#define IO_LED2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_LED2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_LED2_SetPullup()          do { WPUDbits. = 1; } while(0)
#define IO_LED2_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define IO_LED2_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define IO_LED2_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define IO_LED2_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define IO_LED2_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD3 aliases
#define IO_LED3_TRIS                 TRISDbits.TRISD3
#define IO_LED3_LAT                  LATDbits.LATD3
#define IO_LED3_PORT                 PORTDbits.RD3
#define IO_LED3_WPU                  WPUDbits.
#define IO_LED3_OD                   ODCONDbits.
#define IO_LED3_ANS                  ANSELDbits.
#define IO_LED3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IO_LED3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IO_LED3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IO_LED3_GetValue()           PORTDbits.RD3
#define IO_LED3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IO_LED3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IO_LED3_SetPullup()          do { WPUDbits. = 1; } while(0)
#define IO_LED3_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define IO_LED3_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define IO_LED3_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define IO_LED3_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define IO_LED3_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD4 aliases
#define IO_LED4_TRIS                 TRISDbits.TRISD4
#define IO_LED4_LAT                  LATDbits.LATD4
#define IO_LED4_PORT                 PORTDbits.RD4
#define IO_LED4_WPU                  WPUDbits.
#define IO_LED4_OD                   ODCONDbits.
#define IO_LED4_ANS                  ANSELDbits.
#define IO_LED4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IO_LED4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IO_LED4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IO_LED4_GetValue()           PORTDbits.RD4
#define IO_LED4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IO_LED4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IO_LED4_SetPullup()          do { WPUDbits. = 1; } while(0)
#define IO_LED4_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define IO_LED4_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define IO_LED4_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define IO_LED4_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define IO_LED4_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD5 aliases
#define IO_LED5_TRIS                 TRISDbits.TRISD5
#define IO_LED5_LAT                  LATDbits.LATD5
#define IO_LED5_PORT                 PORTDbits.RD5
#define IO_LED5_WPU                  WPUDbits.
#define IO_LED5_OD                   ODCONDbits.
#define IO_LED5_ANS                  ANSELDbits.
#define IO_LED5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_LED5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_LED5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_LED5_GetValue()           PORTDbits.RD5
#define IO_LED5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_LED5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_LED5_SetPullup()          do { WPUDbits. = 1; } while(0)
#define IO_LED5_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define IO_LED5_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define IO_LED5_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define IO_LED5_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define IO_LED5_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD6 aliases
#define IO_LED6_TRIS                 TRISDbits.TRISD6
#define IO_LED6_LAT                  LATDbits.LATD6
#define IO_LED6_PORT                 PORTDbits.RD6
#define IO_LED6_WPU                  WPUDbits.
#define IO_LED6_OD                   ODCONDbits.
#define IO_LED6_ANS                  ANSELDbits.
#define IO_LED6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_LED6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_LED6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_LED6_GetValue()           PORTDbits.RD6
#define IO_LED6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_LED6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IO_LED6_SetPullup()          do { WPUDbits. = 1; } while(0)
#define IO_LED6_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define IO_LED6_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define IO_LED6_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define IO_LED6_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define IO_LED6_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD7 aliases
#define IO_LED7_TRIS                 TRISDbits.TRISD7
#define IO_LED7_LAT                  LATDbits.LATD7
#define IO_LED7_PORT                 PORTDbits.RD7
#define IO_LED7_WPU                  WPUDbits.
#define IO_LED7_OD                   ODCONDbits.
#define IO_LED7_ANS                  ANSELDbits.
#define IO_LED7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_LED7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_LED7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_LED7_GetValue()           PORTDbits.RD7
#define IO_LED7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_LED7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IO_LED7_SetPullup()          do { WPUDbits. = 1; } while(0)
#define IO_LED7_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define IO_LED7_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define IO_LED7_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define IO_LED7_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define IO_LED7_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RE0 aliases
#define IO_RE0_TRIS                 TRISEbits.TRISE0
#define IO_RE0_LAT                  LATEbits.LATE0
#define IO_RE0_PORT                 PORTEbits.RE0
#define IO_RE0_WPU                  WPUEbits.
#define IO_RE0_OD                   ODCONEbits.
#define IO_RE0_ANS                  ANSELEbits.ANS5
#define IO_RE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define IO_RE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define IO_RE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define IO_RE0_GetValue()           PORTEbits.RE0
#define IO_RE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define IO_RE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define IO_RE0_SetPullup()          do { WPUEbits. = 1; } while(0)
#define IO_RE0_ResetPullup()        do { WPUEbits. = 0; } while(0)
#define IO_RE0_SetPushPull()        do { ODCONEbits. = 0; } while(0)
#define IO_RE0_SetOpenDrain()       do { ODCONEbits. = 1; } while(0)
#define IO_RE0_SetAnalogMode()      do { ANSELEbits.ANS5 = 1; } while(0)
#define IO_RE0_SetDigitalMode()     do { ANSELEbits.ANS5 = 0; } while(0)

// get/set RE1 aliases
#define IO_RE1_TRIS                 TRISEbits.TRISE1
#define IO_RE1_LAT                  LATEbits.LATE1
#define IO_RE1_PORT                 PORTEbits.RE1
#define IO_RE1_WPU                  WPUEbits.
#define IO_RE1_OD                   ODCONEbits.
#define IO_RE1_ANS                  ANSELEbits.ANS6
#define IO_RE1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IO_RE1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IO_RE1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IO_RE1_GetValue()           PORTEbits.RE1
#define IO_RE1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IO_RE1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IO_RE1_SetPullup()          do { WPUEbits. = 1; } while(0)
#define IO_RE1_ResetPullup()        do { WPUEbits. = 0; } while(0)
#define IO_RE1_SetPushPull()        do { ODCONEbits. = 0; } while(0)
#define IO_RE1_SetOpenDrain()       do { ODCONEbits. = 1; } while(0)
#define IO_RE1_SetAnalogMode()      do { ANSELEbits.ANS6 = 1; } while(0)
#define IO_RE1_SetDigitalMode()     do { ANSELEbits.ANS6 = 0; } while(0)

// get/set RE2 aliases
#define IO_RE2_TRIS                 TRISEbits.TRISE2
#define IO_RE2_LAT                  LATEbits.LATE2
#define IO_RE2_PORT                 PORTEbits.RE2
#define IO_RE2_WPU                  WPUEbits.
#define IO_RE2_OD                   ODCONEbits.
#define IO_RE2_ANS                  ANSELEbits.ANS7
#define IO_RE2_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define IO_RE2_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define IO_RE2_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define IO_RE2_GetValue()           PORTEbits.RE2
#define IO_RE2_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define IO_RE2_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define IO_RE2_SetPullup()          do { WPUEbits. = 1; } while(0)
#define IO_RE2_ResetPullup()        do { WPUEbits. = 0; } while(0)
#define IO_RE2_SetPushPull()        do { ODCONEbits. = 0; } while(0)
#define IO_RE2_SetOpenDrain()       do { ODCONEbits. = 1; } while(0)
#define IO_RE2_SetAnalogMode()      do { ANSELEbits.ANS7 = 1; } while(0)
#define IO_RE2_SetDigitalMode()     do { ANSELEbits.ANS7 = 0; } while(0)


#define DISPLAY_LED_ARRAY       LATD    // display an int8u value on the led array (8 leds on RD0 to RD7)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Refresh pin configuration
 * @param none
 * @return none
 */
void PIN_MANAGER_RefreshConfig(void);


#endif // PINS_H
/**
 End of File
*/