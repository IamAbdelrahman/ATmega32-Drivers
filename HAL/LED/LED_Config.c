/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file LED_Config.c
 * @brief This module contains the implementation for the LED configuration
 *
 * @author Abdelrahman Kamal
 *
 */

/**********************************************************************
 * Includes
 **********************************************************************/
#include "LED_Config.h"

/**********************************************************************
 * Module Variable Definitions
 **********************************************************************/
/**
 * The following array contains the configuration data for each LED driver
 * Each row represents a single pin. Each column is representing a member of the GpioConfig_t structure.
 * This table is read in by LED_Init(), where each pin is then set up based on this table.
 */
const ST_GpioConfig_t LEDConfig[] = {
/*   PORT            PIN					STATE			*/
    {PORTA,          LED0,                  DIO_OUTPUT},
    
};

/**********************************************************************
 * Function Definitions
 **********************************************************************/
/**********************************************************************
 * Function : LED_ConfigGet()
 *
 * This function is used to initialize the LED based on the configuration
 * table defined in LEDConfig module.
 *
 * PRE-CONDITION: Configuration table needs to populated (sizeof > 0)
 *
 * POST-CONDITION: A constant pointer to the first member of the
 * configuration table will be returned.
 *
 ** @return A pointer to the configuration table.

 **********************************************************************/
const ST_GpioConfig_t* const LED_ConfigGet(void) {
	return (ST_GpioConfig_t *const)&LEDConfig[0];
}
