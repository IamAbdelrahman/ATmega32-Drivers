/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/

/*****************************************************************************
 * FILE DESCRIPTION
 * ----------------------------------------------------------------------------
 * @file SEG7.h
 * @brief The interface definition for the SEG7 driver
 * @description This is the header file for the definition of the interface
 * for the SEG7 driver connected to the MCU.
 *****************************************************************************/
#ifndef INC_SEG7_H_
#define INC_SEG7_H_

/*- INCLUDES
-----------------------------------------------------------------------*/
#include "SEG7_Cfg.h"

/*- GLOBAL MACROS
-----------------------------------------------------------------------*/

/*- GLOBAL TYPEDEFS
-----------------------------------------------------------------------*/

/*- GLOBAL VARIABLES
-----------------------------------------------------------------------*/

/*- APIs PROTOTYPES
-----------------------------------------------------------------------*/
/************************************************************************
 * Service Name: SEG7_Init
 * Syntax: void SEG7_Init(void)
 * Sync/Async: Synchronous
 * Reentrancy: Non reentrant
 * @description: Initialize SEG7
 * @param (in): None
 * @param (inout): None
 * @param (out): None
 * @return: None
 *************************************************************************/
void SEG7_Init(void);

/************************************************************************
 * Service Name: SEG7_Display
 * Syntax: void SEG7_Display(const ST_SEG7Config_t *pSEG7, vuint8_t Digit)
 * Sync/Async: Synchronous
 * Reentrancy: Non reentrant
 * @description: Display a digit on SEG7
 * @param (in): Digit a character to be displayed
 * @param (inout): None
 * @param (out): None
 * @return: None
 *************************************************************************/
void SEG7_Display(vuint8_t Digit);

/************************************************************************
 * Service Name: SEG7_Clear
 * Syntax: void SEG7_Clear(const ST_SEG7Config_t *pSEG7)
 * Sync/Async: Synchronous
 * Reentrancy: Non reentrant
 * @description: Clear/Reset the SEG7
 * @param (in): None
 * @param (inout): None
 * @param (out): None
 * @return: None
 *************************************************************************/
void SEG7_Clear(void);

#endif /* INC_SEG7_H_ */
