/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.1.0
*/

/*
� [2024] Microchip Technology Inc. and its subsidiaries.

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

#include "../pins.h"


void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers (output value)
    */
    LATA = 0x0;
    LATB = 0x0;
    LATC = 0x0;
    LATD = 0x0;
    LATE = 0x0;

    PIN_MANAGER_RefreshConfig();    
}
  
void PIN_MANAGER_RefreshConfig(void)
{
    /**
    TRISx registers (direction)
    */
    TRISA = 0x3;
    TRISB = 0x1;
    TRISC = 0x0;
    TRISD = 0x0;
    TRISE = 0x0;

    /**
    ANSELx registers (ADC pin)
    */
    ANSELH = 0x1F;

    /**
    WPUx registers (Weak Pullup)
    */
    WPUB = 0x0;

    /**
    ODx registers
    */

    /**
    SLRCONx registers
    */

    /**
    INLVLx registers
    */

   /**
    RxyI2C | RxyFEAT registers   
    */
    /**
    PPS registers
    */

   /**
    IOCx registers 
    */
    IOCB = 0x0;


    // Enable INTCONbits.RBIE interrupt 
    //INTCONbits.RBIE = 1; 
    
    // Disable INTCONbits.RBIE interrupt 
    INTCONbits.RBIE = 0; 
}
/**
 End of File
*/