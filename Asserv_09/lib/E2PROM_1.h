//*****************************************************************************
//*****************************************************************************
//  FILENAME:  E2PROM_1.h
//  Version: 1.7, Updated on 2009/3/31 at 12:4:53
//  Generated by PSoC Designer 5.0.423.0
//
//  DESCRIPTION:
//    E2PROM_1 Module header file.
//-----------------------------------------------------------------------------
//      Copyright (c) Cypress MicroSystems 2001-2004. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************

/* include the global header file */
#include <m8c.h>

/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  E2PROM_1_Start         // class 1
#pragma fastcall16  E2PROM_1_Stop          // class 2
#pragma fastcall16  E2PROM_1_bE2Write      // class 4
#pragma fastcall16  E2PROM_1_E2Read        // class 4 

//-------------------------------------------------
// Prototypes of the E2PROM_1 API.
//-------------------------------------------------
extern void  E2PROM_1_Start(void);      
extern void  E2PROM_1_Stop(void);
extern CHAR  E2PROM_1_bE2Write(WORD wAddr, BYTE * pbData, WORD wByteCount, CHAR cTemperature);
extern void  E2PROM_1_E2Read(WORD wAddr, BYTE * pbDataDest, WORD wByteCount);

//-------------------------------------------------
// Defines for E2PROM_1 API's.
//-------------------------------------------------
/* Return value for bE2Write */
#define  E2PROM_1_NOERROR           0
#define  E2PROM_1_FAILURE          -1
#define  E2PROM_1_STACKOVERFLOW    -2

#define  E2PROM_1_START_BLOCK     0x1ff                              // Starting block of E2PROM_1 EEPROM device
#define  E2PROM_1_START_ADDR      (0x1ff * 64)                       // absolute address of E2PROM_1 EEPROM device
#define  E2PROM_1_LENGTH          0x40                               // length of E2PROM_1 EEPROM device


// end of file E2PROM_1.h
