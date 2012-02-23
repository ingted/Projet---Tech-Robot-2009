//*****************************************************************************
//*****************************************************************************
//  FILENAME: PWM16_1.h
//   Version: 2.5, Updated on 2009/3/31 at 12:6:28
//  Generated by PSoC Designer 5.0.423.0
//
//  DESCRIPTION: PWM16 User Module C Language interface file
//               for the 22/24/27/29xxx PSoC family of devices
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress MicroSystems 2000-2004. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************

#include <m8c.h>

#pragma fastcall16 PWM16_1_EnableInt
#pragma fastcall16 PWM16_1_DisableInt
#pragma fastcall16 PWM16_1_Start
#pragma fastcall16 PWM16_1_Stop
#pragma fastcall16 PWM16_1_wReadCounter              // Read  DR0
#pragma fastcall16 PWM16_1_WritePeriod               // Write DR1
#pragma fastcall16 PWM16_1_wReadPulseWidth           // Read  DR2
#pragma fastcall16 PWM16_1_WritePulseWidth           // Write DR2

// The following symbols are deprecated.
// They may be omitted in future releases
//
#pragma fastcall16 wPWM16_1_ReadCounter              // Read  DR0 (Deprecated)
#pragma fastcall16 wPWM16_1_ReadPulseWidth           // Read  DR2 (Deprecated)


//-------------------------------------------------
// Prototypes of the PWM16_1 API.
//-------------------------------------------------

extern void PWM16_1_EnableInt(void);                  // Proxy Class 1
extern void PWM16_1_DisableInt(void);                 // Proxy Class 1
extern void PWM16_1_Start(void);                      // Proxy Class 1
extern void PWM16_1_Stop(void);                       // Proxy Class 1
extern WORD PWM16_1_wReadCounter(void);               // Proxy Class 2
extern void PWM16_1_WritePeriod(WORD wPeriod);        // Proxy Class 1
extern WORD PWM16_1_wReadPulseWidth(void);            // Proxy Class 1
extern void PWM16_1_WritePulseWidth(WORD wPulseWidth);// Proxy Class 1

// The following functions are deprecated.
// They may be omitted in future releases
//
extern WORD wPWM16_1_ReadCounter(void);            // Deprecated
extern WORD wPWM16_1_ReadPulseWidth(void);         // Deprecated


//-------------------------------------------------
// Constants for PWM16_1 API's.
//-------------------------------------------------

#define PWM16_1_CONTROL_REG_START_BIT          ( 0x01 )
#define PWM16_1_INT_REG_ADDR                   ( 0x0e1 )
#define PWM16_1_INT_MASK                       ( 0x08 )


//--------------------------------------------------
// Constants for PWM16_1 user defined values
//--------------------------------------------------

#define PWM16_1_PERIOD                         ( 0x400 )
#define PWM16_1_PULSE_WIDTH                    ( 0x0 )


//-------------------------------------------------
// Register Addresses for PWM16_1
//-------------------------------------------------

#pragma ioport  PWM16_1_COUNTER_LSB_REG:    0x028          //DR0 Count register LSB
BYTE            PWM16_1_COUNTER_LSB_REG;
#pragma ioport  PWM16_1_COUNTER_MSB_REG:    0x02c          //DR0 Count register MSB
BYTE            PWM16_1_COUNTER_MSB_REG;
#pragma ioport  PWM16_1_PERIOD_LSB_REG: 0x029              //DR1 Period register LSB
BYTE            PWM16_1_PERIOD_LSB_REG;
#pragma ioport  PWM16_1_PERIOD_MSB_REG: 0x02d              //DR1 Period register MSB
BYTE            PWM16_1_PERIOD_MSB_REG;
#pragma ioport  PWM16_1_COMPARE_LSB_REG:    0x02a          //DR2 Compare register LSB
BYTE            PWM16_1_COMPARE_LSB_REG;
#pragma ioport  PWM16_1_COMPARE_MSB_REG:    0x02e          //DR2 Compare register MSB
BYTE            PWM16_1_COMPARE_MSB_REG;
#pragma ioport  PWM16_1_CONTROL_LSB_REG:    0x02b          //Control register LSB
BYTE            PWM16_1_CONTROL_LSB_REG;
#pragma ioport  PWM16_1_CONTROL_MSB_REG:    0x02f          //Control register MSB
BYTE            PWM16_1_CONTROL_MSB_REG;
#pragma ioport  PWM16_1_FUNC_LSB_REG:   0x128              //Function register LSB
BYTE            PWM16_1_FUNC_LSB_REG;
#pragma ioport  PWM16_1_FUNC_MSB_REG:   0x12c              //Function register MSB
BYTE            PWM16_1_FUNC_MSB_REG;
#pragma ioport  PWM16_1_INPUT_LSB_REG:  0x129              //Input register LSB
BYTE            PWM16_1_INPUT_LSB_REG;
#pragma ioport  PWM16_1_INPUT_MSB_REG:  0x12d              //Input register MSB
BYTE            PWM16_1_INPUT_MSB_REG;
#pragma ioport  PWM16_1_OUTPUT_LSB_REG: 0x12a              //Output register LSB
BYTE            PWM16_1_OUTPUT_LSB_REG;
#pragma ioport  PWM16_1_OUTPUT_MSB_REG: 0x12e              //Output register MSB
BYTE            PWM16_1_OUTPUT_MSB_REG;
#pragma ioport  PWM16_1_INT_REG:       0x0e1               //Interrupt Mask Register
BYTE            PWM16_1_INT_REG;


//-------------------------------------------------
// PWM16_1 Macro 'Functions'
//-------------------------------------------------

#define PWM16_1_Start_M \
   ( PWM16_1_CONTROL_LSB_REG |=  PWM16_1_CONTROL_REG_START_BIT )

#define PWM16_1_Stop_M  \
   ( PWM16_1_CONTROL_LSB_REG &= ~PWM16_1_CONTROL_REG_START_BIT )

#define PWM16_1_EnableInt_M   \
   M8C_EnableIntMask(  PWM16_1_INT_REG, PWM16_1_INT_MASK )

#define PWM16_1_DisableInt_M  \
   M8C_DisableIntMask( PWM16_1_INT_REG, PWM16_1_INT_MASK )

// end of file PWM16_1.h
