/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/

/*****************************************************************************
 * FILE DESCRIPTION
 * ----------------------------------------------------------------------------
 *	@file: KEYPAD_Lcfg.c
 *	@brief This module contains the implementation for the KEYPAD
 *configuration
 *
 *****************************************************************************/

/*- INCLUDES
-----------------------------------------------------------------------*/
#include "KEYPAD_Cfg.h"

/*- LOCAL MACROS
-----------------------------------------------------------------------*/

/*- LOCAL DATATYPES
-----------------------------------------------------------------------*/

/*- LOCAL FUNCTIONS PROTOTYPES
-----------------------------------------------------------------------*/

/*- GLOBAL STATIC VARIABLES
-----------------------------------------------------------------------*/
static const ST_KEYPADConfig_t configKeypad[] = {KEYPADCFG};

/*- GLOBAL VARIABLES
-----------------------------------------------------------------------*/
vuint8_t configSizeKeypad = KEYPAD4X4;

/*- LOCAL FUNCTIONS IMPLEMENTATION
-----------------------------------------------------------------------*/

/*- APIs IMPLEMENTATION
-----------------------------------------------------------------------*/
const ST_KEYPADConfig_t *const KEYPAD_ConfigGet(void) {
  return (ST_KEYPADConfig_t *const) & configKeypad[0];
}
