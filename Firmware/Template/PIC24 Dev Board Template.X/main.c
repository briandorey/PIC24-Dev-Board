/*
 
 * PIC24F128GC006 Development Board Code Template
 * Debug port is on UART 1
 * LEDs enabled on RE3 and RE4
 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <p24fj128gc006.h>
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/interrupt_manager.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/uart1.h"

#define debug

#ifdef debug

// Trace - used to write traced strings to the debug uart port

void Trace(const uint8_t *writeBuffer){
    int  writebufferLen = strlen((char *)writeBuffer);

     UART1_WriteBuffer ( writeBuffer, writebufferLen)  ;
     while(!(UART1_StatusGet() & UART1_TX_COMPLETE ))
        {
           // Wait for the tranmission to complete
        }
     UART1_Write('\r');
     UART1_Write('\n');
     while(!(UART1_StatusGet() & UART1_TX_COMPLETE ))
        {
           // Wait for the tranmission to complete
        }
}
#endif

int main(void){
   SYSTEM_Initialize();
   
    #ifdef debug
        Trace((unsigned char *)"PIC24 Dev board starting");
    #endif
    
   RE3_LED_SetHigh();
    
   while (1){
       
   }
   
    return -1;
}