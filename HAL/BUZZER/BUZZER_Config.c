
/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file BUZZER_Config.c
 * @brief This module contains the implementation for the BUZZER configuration
 *
 * @author Abdelrahman Kamal
 *
 */

/**********************************************************************
 * Includes
 **********************************************************************/
#include "BUZZER_Config.h"

/**********************************************************************
 * Module Variable Definitions
 **********************************************************************/
/**
 * The following array contains the configuration data for each BUZZER driver
 * Each row represents a single pin. Each column is representing a member of the
 * GpioConfig_t structure. This table is read in by BUZZER_Init(), where each
 * pin is then set up based on this table.
 */
const ST_BUZZER_t BUZZERConfig[] = {BUZZERPA0, BUZZERPB0};

/**********************************************************************
 * Function Definitions
 **********************************************************************/
/**********************************************************************
 * Function : BUZZER_ConfigGet()
 *
 * This function is used to initialize the BUZZER based on the configuration
 * table defined in BUZZERConfig module.
 *
 * PRE-CONDITION: Configuration table needs to populated (sizeof > 0)
 *
 * POST-CONDITION: A constant pointer to the first member of the
 * configuration table will be returned.
 *
 ** @return A pointer to the configuration table.

 **********************************************************************/
const ST_BUZZER_t *const BUZZER_ConfigGet(void) {
  return (ST_BUZZER_t *const) & BUZZERConfig[0];
}
