/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file BUZZER.c
 * @brief The implementation for the BUZZER driver
 *
 * @author Abdelrahman Kamal
 *
 */

/**********************************************************************
 * Includes
 **********************************************************************/
#include "BUZZER.h"

/**********************************************************************
 * Function Definitions
 **********************************************************************/
/**********************************************************************
 * Function : BUZZER_Init()
 *
 *  Description:
 *  This function is used to initialize a buzzer connected to the MCU's
 *channel(pin)
 *
 *  PRE-CONDITION: Configuration table needs to populated (sizeof > 0)
 *  @param pBUZZER is the pointer to the configuration structure ST_BUZZER_t
 *  @return void
 **********************************************************************/
void BUZZER_Init(ST_BUZZER_t *pBUZZER) { GPIO_Init(&pBUZZER->buzzerCfg); }

/**********************************************************************
 * Function : BUZZER_Control()
 *
 *  Description:
 *  This function is used to control a buzzer connected to the MCU's
 channel(pin)
 *
 *  PRE-CONDITION: BUZZER is initialized
 *  @param pBUZZER is the pointer to the configuration structure ST_BUZZER_t

 *  @return void
 **********************************************************************/
void BUZZER_Control(ST_BUZZER_t *pBUZZER) {
  switch (pBUZZER->buzzerState) {
  case HIGH:
    GPIO_PinWrite(pBUZZER->buzzerCfg.Port, pBUZZER->buzzerCfg.Pin, HIGH);
    break;
  case LOW:
    GPIO_PinWrite(pBUZZER->buzzerCfg.Port, pBUZZER->buzzerCfg.Pin, LOW);
    break;
  case TOGGLE:
    GPIO_PinToggle(pBUZZER->buzzerCfg.Port, pBUZZER->buzzerCfg.Pin);
    break;
  default:
    break;
  }
}