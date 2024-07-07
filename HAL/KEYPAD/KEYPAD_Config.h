/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file LCD_Config.h
 * @brief This module contains interface definitions for the
 *  LCD configuration.
 * @author Abdelrahman Kamal
 *
 */

#ifndef KEYPAD_CONFIG_H
#define KEYPAD_CONFIG_H

/**********************************************************************
 * Includes
 **********************************************************************/
#include "GPIO.h"

/**********************************************************************
 * Preprocessor Macros
 **********************************************************************/
#define KEYPAD_PORT 	PORTD
#define ROW0 		Pin0
#define ROW1 		Pin1
#define ROW2 		Pin2
#define ROW3 		Pin3
#define COL0 		Pin4
#define COL1 		Pin5
#define COL2 		Pin6
#define COL3 		Pin7

/**********************************************************************
 * Typedefs
 **********************************************************************/

/**********************************************************************
 * Function Prototypes
 **********************************************************************/
const ST_GPIOConfig_t *const KEYPAD_ConfigGet(void);
#endif /* KEYPAD_CONFIG_H */
