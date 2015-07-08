/**
  System Interrupts Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the MPLAB® Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for MPLAB® Code Configurator interrupts.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25.2
        Device            :  PIC24FJ128GC006
        Version           :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.24
        MPLAB             :  MPLAB X v2.35 or v3.00
 */
/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
 */
#include <xc.h>
/**
    Section: Device Pin Macros
 */
/**
  @Summary
    Sets the GPIO pin, RE3, high using LATE3.

  @Description
    Sets the GPIO pin, RE3, high using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 high (1)
    RE3_LED_SetHigh();
    </code>

 */
#define RE3_LED_SetHigh()          _LATE3 = 1
/**
  @Summary
    Sets the GPIO pin, RE3, low using LATE3.

  @Description
    Sets the GPIO pin, RE3, low using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 low (0)
    RE3_LED_SetLow();
    </code>

 */
#define RE3_LED_SetLow()           _LATE3 = 0
/**
  @Summary
    Toggles the GPIO pin, RE3, using LATE3.

  @Description
    Toggles the GPIO pin, RE3, using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE3
    RE3_LED_SetToggle();
    </code>

 */
#define RE3_LED_Toggle()           _LATE3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE3.

  @Description
    Reads the value of the GPIO pin, RE3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE3
    postValue = RE3_LED_GetValue();
    </code>

 */
#define RE3_LED_GetValue()         _RE3
/**
  @Summary
    Configures the GPIO pin, RE3, as an input.

  @Description
    Configures the GPIO pin, RE3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an input
    RE3_LED_SetDigitalInput();
    </code>

 */
#define RE3_LED_SetDigitalInput()  _TRISE3 = 1
/**
  @Summary
    Configures the GPIO pin, RE3, as an output.

  @Description
    Configures the GPIO pin, RE3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an output
    RE3_LED_SetDigitalOutput();
    </code>

 */
#define RE3_LED_SetDigitalOutput() _TRISE3 = 0
/**
  @Summary
    Sets the GPIO pin, RE4, high using LATE4.

  @Description
    Sets the GPIO pin, RE4, high using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 high (1)
    RE4_LED_SetHigh();
    </code>

 */
#define RE4_LED_SetHigh()          _LATE4 = 1
/**
  @Summary
    Sets the GPIO pin, RE4, low using LATE4.

  @Description
    Sets the GPIO pin, RE4, low using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 low (0)
    RE4_LED_SetLow();
    </code>

 */
#define RE4_LED_SetLow()           _LATE4 = 0
/**
  @Summary
    Toggles the GPIO pin, RE4, using LATE4.

  @Description
    Toggles the GPIO pin, RE4, using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE4
    RE4_LED_SetToggle();
    </code>

 */
#define RE4_LED_Toggle()           _LATE4 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE4.

  @Description
    Reads the value of the GPIO pin, RE4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE4
    postValue = RE4_LED_GetValue();
    </code>

 */
#define RE4_LED_GetValue()         _RE4
/**
  @Summary
    Configures the GPIO pin, RE4, as an input.

  @Description
    Configures the GPIO pin, RE4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an input
    RE4_LED_SetDigitalInput();
    </code>

 */
#define RE4_LED_SetDigitalInput()  _TRISE4 = 1
/**
  @Summary
    Configures the GPIO pin, RE4, as an output.

  @Description
    Configures the GPIO pin, RE4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an output
    RE4_LED_SetDigitalOutput();
    </code>

 */
#define RE4_LED_SetDigitalOutput() _TRISE4 = 0
/**
  @Summary
    Sets the GPIO pin, RG6, high using LATG6.

  @Description
    Sets the GPIO pin, RG6, high using LATG6.

  @Preconditions
    The RG6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG6 high (1)
    U1RX_SetHigh();
    </code>

 */
#define U1RX_SetHigh()          _LATG6 = 1
/**
  @Summary
    Sets the GPIO pin, RG6, low using LATG6.

  @Description
    Sets the GPIO pin, RG6, low using LATG6.

  @Preconditions
    The RG6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG6 low (0)
    U1RX_SetLow();
    </code>

 */
#define U1RX_SetLow()           _LATG6 = 0
/**
  @Summary
    Toggles the GPIO pin, RG6, using LATG6.

  @Description
    Toggles the GPIO pin, RG6, using LATG6.

  @Preconditions
    The RG6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RG6
    U1RX_SetToggle();
    </code>

 */
#define U1RX_Toggle()           _LATG6 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RG6.

  @Description
    Reads the value of the GPIO pin, RG6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RG6
    postValue = U1RX_GetValue();
    </code>

 */
#define U1RX_GetValue()         _RG6
/**
  @Summary
    Configures the GPIO pin, RG6, as an input.

  @Description
    Configures the GPIO pin, RG6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG6 as an input
    U1RX_SetDigitalInput();
    </code>

 */
#define U1RX_SetDigitalInput()  _TRISG6 = 1
/**
  @Summary
    Configures the GPIO pin, RG6, as an output.

  @Description
    Configures the GPIO pin, RG6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG6 as an output
    U1RX_SetDigitalOutput();
    </code>

 */
#define U1RX_SetDigitalOutput() _TRISG6 = 0
/**
  @Summary
    Sets the GPIO pin, RG7, high using LATG7.

  @Description
    Sets the GPIO pin, RG7, high using LATG7.

  @Preconditions
    The RG7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG7 high (1)
    U1CTS_SetHigh();
    </code>

 */
#define U1CTS_SetHigh()          _LATG7 = 1
/**
  @Summary
    Sets the GPIO pin, RG7, low using LATG7.

  @Description
    Sets the GPIO pin, RG7, low using LATG7.

  @Preconditions
    The RG7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG7 low (0)
    U1CTS_SetLow();
    </code>

 */
#define U1CTS_SetLow()           _LATG7 = 0
/**
  @Summary
    Toggles the GPIO pin, RG7, using LATG7.

  @Description
    Toggles the GPIO pin, RG7, using LATG7.

  @Preconditions
    The RG7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RG7
    U1CTS_SetToggle();
    </code>

 */
#define U1CTS_Toggle()           _LATG7 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RG7.

  @Description
    Reads the value of the GPIO pin, RG7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RG7
    postValue = U1CTS_GetValue();
    </code>

 */
#define U1CTS_GetValue()         _RG7
/**
  @Summary
    Configures the GPIO pin, RG7, as an input.

  @Description
    Configures the GPIO pin, RG7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG7 as an input
    U1CTS_SetDigitalInput();
    </code>

 */
#define U1CTS_SetDigitalInput()  _TRISG7 = 1
/**
  @Summary
    Configures the GPIO pin, RG7, as an output.

  @Description
    Configures the GPIO pin, RG7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG7 as an output
    U1CTS_SetDigitalOutput();
    </code>

 */
#define U1CTS_SetDigitalOutput() _TRISG7 = 0
/**
  @Summary
    Sets the GPIO pin, RG8, high using LATG8.

  @Description
    Sets the GPIO pin, RG8, high using LATG8.

  @Preconditions
    The RG8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG8 high (1)
    U1TX_SetHigh();
    </code>

 */
#define U1TX_SetHigh()          _LATG8 = 1
/**
  @Summary
    Sets the GPIO pin, RG8, low using LATG8.

  @Description
    Sets the GPIO pin, RG8, low using LATG8.

  @Preconditions
    The RG8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG8 low (0)
    U1TX_SetLow();
    </code>

 */
#define U1TX_SetLow()           _LATG8 = 0
/**
  @Summary
    Toggles the GPIO pin, RG8, using LATG8.

  @Description
    Toggles the GPIO pin, RG8, using LATG8.

  @Preconditions
    The RG8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RG8
    U1TX_SetToggle();
    </code>

 */
#define U1TX_Toggle()           _LATG8 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RG8.

  @Description
    Reads the value of the GPIO pin, RG8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RG8
    postValue = U1TX_GetValue();
    </code>

 */
#define U1TX_GetValue()         _RG8
/**
  @Summary
    Configures the GPIO pin, RG8, as an input.

  @Description
    Configures the GPIO pin, RG8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG8 as an input
    U1TX_SetDigitalInput();
    </code>

 */
#define U1TX_SetDigitalInput()  _TRISG8 = 1
/**
  @Summary
    Configures the GPIO pin, RG8, as an output.

  @Description
    Configures the GPIO pin, RG8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG8 as an output
    U1TX_SetDigitalOutput();
    </code>

 */
#define U1TX_SetDigitalOutput() _TRISG8 = 0
/**
  @Summary
    Sets the GPIO pin, RG9, high using LATG9.

  @Description
    Sets the GPIO pin, RG9, high using LATG9.

  @Preconditions
    The RG9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG9 high (1)
    U1RTS_SetHigh();
    </code>

 */
#define U1RTS_SetHigh()          _LATG9 = 1
/**
  @Summary
    Sets the GPIO pin, RG9, low using LATG9.

  @Description
    Sets the GPIO pin, RG9, low using LATG9.

  @Preconditions
    The RG9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG9 low (0)
    U1RTS_SetLow();
    </code>

 */
#define U1RTS_SetLow()           _LATG9 = 0
/**
  @Summary
    Toggles the GPIO pin, RG9, using LATG9.

  @Description
    Toggles the GPIO pin, RG9, using LATG9.

  @Preconditions
    The RG9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RG9
    U1RTS_SetToggle();
    </code>

 */
#define U1RTS_Toggle()           _LATG9 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RG9.

  @Description
    Reads the value of the GPIO pin, RG9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RG9
    postValue = U1RTS_GetValue();
    </code>

 */
#define U1RTS_GetValue()         _RG9
/**
  @Summary
    Configures the GPIO pin, RG9, as an input.

  @Description
    Configures the GPIO pin, RG9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG9 as an input
    U1RTS_SetDigitalInput();
    </code>

 */
#define U1RTS_SetDigitalInput()  _TRISG9 = 1
/**
  @Summary
    Configures the GPIO pin, RG9, as an output.

  @Description
    Configures the GPIO pin, RG9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG9 as an output
    U1RTS_SetDigitalOutput();
    </code>

 */
#define U1RTS_SetDigitalOutput() _TRISG9 = 0

/**
    Section: Function Prototypes
 */
/**
  @Summary
    Configures the pin settings of the PIC24FJ128GC006
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the MPLAB® Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

 */
void PIN_MANAGER_Initialize(void);

#endif
