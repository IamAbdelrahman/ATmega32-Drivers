/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/

/*****************************************************************************
 * FILE DESCRIPTION
 * ----------------------------------------------------------------------------
 * @file BUZZER.c
 * @brief The implementation for the BUZZER driver
 *
 ****************************************************************************/

/*- INCLUDES
-----------------------------------------------------------------------*/
#include "BUZZER.h"

/*- LOCAL MACROS
-----------------------------------------------------------------------*/

/*- LOCAL VARIABLES
-----------------------------------------------------------------------*/

/*- LOCAL FUNCTIONS PROTOTYPES
-----------------------------------------------------------------------*/

/*- GLOBAL STATIC VARIABLES
-----------------------------------------------------------------------*/

/*- GLOBAL EXTERN VARIABLES
-----------------------------------------------------------------------*/
extern vuint8_t configSizeBuzzer;

/*- LOCAL FUNCTIONS IMPLEMENTATION
-----------------------------------------------------------------------*/

/*- APIs IMPLEMENTATION
-----------------------------------------------------------------------*/
void BUZZER_Init(void) {
  const ST_BUZZERConfig_t *const pBuzzer = BUZZER_ConfigGet();
  vuint8_t i = 0;
  for (i = 0; i < configSizeBuzzer; i++)
    GPIO_Init(pBuzzer[i].pBuzzerCfg, 1);
}

void BUZZER_Control(const ST_BUZZERConfig_t *const pBuzzer) {
  switch (pBuzzer->buzzerState) {
  case HIGH:
    GPIO_PinWrite(pBuzzer->pBuzzerCfg->portNumber,
                  pBuzzer->pBuzzerCfg->pinNumber, HIGH);
    break;
  case LOW:
    GPIO_PinWrite(pBuzzer->pBuzzerCfg->portNumber,
                  pBuzzer->pBuzzerCfg->pinNumber, LOW);
    break;
  case TOGGLE:
    GPIO_PinToggle(pBuzzer->pBuzzerCfg->portNumber,
                   pBuzzer->pBuzzerCfg->pinNumber);
    break;
  default:
    break;
  }
}
