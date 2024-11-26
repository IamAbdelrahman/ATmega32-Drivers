/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/

/*****************************************************************************
 * FILE DESCRIPTION
 * ----------------------------------------------------------------------------
 *	@file: KEYPAD_Cfg.h
 *	@brief This module contains interface definitions for the
 *   KEYPAD configuration.
 *****************************************************************************/

#ifndef CFG_KEYPAD_CFG_H_
#define CFG_KEYPAD_CFG_H_

/*- INCLUDES
-----------------------------------------------------------------------*/
#include "GPIO.h"

/*- GLOBAL MACROS
-----------------------------------------------------------------------*/
#define KEYPAD_PORT PORTD
#define KEYPAD4X4 (8U)
#define ROWS (4U)
#define COLS (4U)
/* #define KEYPAD4X3   (7U)
 * #define COLS     (3U)
 */
#define ROW0 Pin0
#define ROW1 Pin1
#define ROW2 Pin2
#define ROW3 Pin3
#define COL0 Pin4
#define COL1 Pin5
#define COL2 Pin6
#define COL3 Pin7

/*- KEYPAD PINS CONFIGURATION */
#define KEYPAD_ROW0                                                            \
  (ST_GPIOConfig_t) { KEYPAD_PORT, ROW0, GPIO_OUTPUT }
#define KEYPAD_ROW1                                                            \
  (ST_GPIOConfig_t) { KEYPAD_PORT, ROW1, GPIO_OUTPUT }
#define KEYPAD_ROW2                                                            \
  (ST_GPIOConfig_t) { KEYPAD_PORT, ROW2, GPIO_OUTPUT }
#define KEYPAD_ROW3                                                            \
  (ST_GPIOConfig_t) { KEYPAD_PORT, ROW3, GPIO_OUTPUT }
#define KEYPAD_COL0                                                            \
  (ST_GPIOConfig_t) { KEYPAD_PORT, COL0, GPIO_INPUT_PULLUP }
#define KEYPAD_COL1                                                            \
  (ST_GPIOConfig_t) { KEYPAD_PORT, COL1, GPIO_INPUT_PULLUP }
#define KEYPAD_COL2                                                            \
  (ST_GPIOConfig_t) { KEYPAD_PORT, COL2, GPIO_INPUT_PULLUP }
#ifdef KEYPAD4X4
#define KEYPAD_COL3                                                            \
  (ST_GPIOConfig_t) { KEYPAD_PORT, COL3, GPIO_INPUT_PULLUP }
#define KEYPADCFG                                                              \
  (ST_KEYPADConfig_t) {                                                        \
    &KEYPAD_ROW0, &KEYPAD_ROW1, &KEYPAD_ROW2, &KEYPAD_ROW3, &KEYPAD_COL0,      \
        &KEYPAD_COL1, &KEYPAD_COL2, &KEYPAD_COL3                               \
  }
#endif

#ifdef KEYPAD4X3
#define KEYPADCFG                                                              \
  (ST_KEYPADConfig_t) {                                                        \
    &KEYPAD_ROW0, &KEYPAD_ROW1, &KEYPAD_ROW2, &KEYPAD_ROW3, &KEYPAD_COL0,      \
        &KEYPAD_COL1, &KEYPAD_COL2                                             \
  }
#endif

/*- GLOBAL TYPEDEFS
-----------------------------------------------------------------------*/
typedef struct {
  ST_GPIOConfig_t *pKeyCfg[KEYPAD4X4];
} ST_KEYPADConfig_t;

/*- GLOBAL VARIABLES
-----------------------------------------------------------------------*/

/*- APIs PROTOTYPES
-----------------------------------------------------------------------*/
/************************************************************************
 * Service Name: KEYPAD_ConfigGet
 * Syntax: const ST_KEYPADConfig_t *const KEYPAD_ConfigGet(void)
 * Sync/Async: Synchronous
 * Reentrancy: Non reentrant
 * @description: A helper function to initialize the KEYPAD based on a config
 * table.
 * @param (in): None
 * @param (inout): None
 * @param (out): None
 * @return: const ST_KEYPADConfig_t* const
 *************************************************************************/
const ST_KEYPADConfig_t *const KEYPAD_ConfigGet(void);

#endif /* CFG_KEYPAD_CFG_H_ */
