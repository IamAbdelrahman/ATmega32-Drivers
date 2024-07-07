/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file BUZZER_Config.h
 * @brief This module contains interface definitions for the
 *  BUZZER configuration.
 * @author Abdelrahman Kamal
 *
 */

#ifndef BUZZER_CONFIG_H
#define BUZZER_CONFIG_H

/**********************************************************************
 * Includes
 **********************************************************************/
#include "GPIO.h"

/**********************************************************************
 * Preprocessor Macros
 **********************************************************************/
#define BUZZERPA0                                                          \
  (ST_BUZZER_t) { {PORTA, Pin0, GPIO_OUTPUT}, HIGH }
#define BUZZERPB0                                                          \
  (ST_BUZZER_t) { {PORTB, Pin0, GPIO_OUTPUT}, LOW }

/**********************************************************************
 * Typedefs
 **********************************************************************/
typedef struct {
  ST_GPIOConfig_t buzzerCfg;
  PinState_t buzzerState;
} ST_BUZZER_t;

/**********************************************************************
 * Function Prototypes
 **********************************************************************/
const ST_BUZZER_t *const BUZZER_ConfigGet(void);

#endif /* BUZZER_CONFIG_H */
