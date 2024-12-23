/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/

/*****************************************************************************
 * FILE DESCRIPTION
 * ----------------------------------------------------------------------------
 * @file BUZZER.h
 * @brief The interface definition for the BUZZER driver
 * @description This is the header file for the definition of the interface
 * for the BUZZER driver connected to the MCU.
 *****************************************************************************/
#ifndef INC_BUZZER_H_
#define INC_BUZZER_H_

/*- INCLUDES
-----------------------------------------------------------------------*/
#include "BUZZER_Cfg.h"

/*- GLOBAL MACROS
-----------------------------------------------------------------------*/

/*- GLOBAL TYPEDEFS
-----------------------------------------------------------------------*/

/*- GLOBAL VARIABLES
-----------------------------------------------------------------------*/

/*- APIs PROTOTYPES
-----------------------------------------------------------------------*/
/************************************************************************
 * Service Name: BUZZER_Init
 * Syntax: void BUZZER_Init(ST_BUZZERConfig_t *pBUZZER)
 * Sync/Async: Synchronous
 * Reentrancy: Non reentrant
 * @description: Initialize BUZZER
 * @param (in): None
 * @param (inout): None
 * @param (out): None
 * @return: None
 *************************************************************************/
void BUZZER_Init(void);

/************************************************************************
 * Service Name: BUZZER_Control
 * Syntax: void BUZZER_Control(ST_BUZZERConfig_t *pBUZZER)
 * Sync/Async: Synchronous
 * Reentrancy: Non reentrant
 * @description: Control BUZZER
 * @param (in): pBuzzer a pointer to the BUZZERConfig structure
 * @param (inout): None
 * @param (out): None
 * @return: None
 *************************************************************************/
void BUZZER_Control(const ST_BUZZERConfig_t *const pBuzzer);

#endif /* INC_BUZZER_H_ */
