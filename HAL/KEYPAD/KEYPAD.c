/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/

/*****************************************************************************
 * FILE DESCRIPTION
 * ----------------------------------------------------------------------------
 * @file KEYPAD.c
 * @brief The implementation for the KEYPAD driver
 *
 ****************************************************************************/

/*- INCLUDES
 -----------------------------------------------------------------------*/
#include "KEYPAD.h"

/*- LOCAL MACROS
 -----------------------------------------------------------------------*/

/*- LOCAL DATATYPES
 -----------------------------------------------------------------------*/

/*- LOCAL FUNCTIONS PROTOTYPES
 -----------------------------------------------------------------------*/

/*- GLOBAL STATIC VARIABLES
 -----------------------------------------------------------------------*/

/*- GLOBAL EXTERN VARIABLES
 -----------------------------------------------------------------------*/
extern vuint8_t configSizeKeypad;

/*- LOCAL FUNCTIONS IMPLEMENTATION
 -----------------------------------------------------------------------*/

/*- APIs IMPLEMENTATION
 -----------------------------------------------------------------------*/
void KEYPAD_Init() {
  const ST_KEYPADConfig_t *const pKeypad = KEYPAD_ConfigGet();
  vuint8_t i = 0, j = 0;
  for (i = 0; i < configSizeKeypad; i++)
    GPIO_Init(pKeypad->pKeyCfg[i], 1);

  for (j = 0; j < ROWS; j++)
    GPIO_PinWrite(KEYPAD_PORT, pKeypad->pKeyCfg[j]->pinNumber, HIGH);
}

vuint8_t KEYPAD_GetKey(const ST_KEYPADConfig_t *const pKeypad) {
  vuint8_t i = 0, j = 0;
  for (i = 0; i < ROWS; i++) {
    GPIO_PinWrite(KEYPAD_PORT, pKeypad->pKeyCfg[i]->pinNumber, LOW);
    for (j = 0; j < COLS; j++) {
      if (!GPIO_PinRead(KEYPAD_PORT, pKeypad->pKeyCfg[j + 4]->pinNumber)) {
        while (!GPIO_PinRead(KEYPAD_PORT, pKeypad->pKeyCfg[j + 4]->pinNumber))
          ;
        switch (i) {
        case 0:
          if (j == 0)
            return '7';
          if (j == 1)
            return '8';
          if (j == 2)
            return '9';
          if (j == 3)
            return '/';
          break;
        case 1:
          if (j == 0)
            return '4';
          if (j == 1)
            return '5';
          if (j == 2)
            return '6';
          if (j == 3)
            return '*';
          break;
        case 2:
          if (j == 0)
            return '1';
          if (j == 1)
            return '2';
          if (j == 2)
            return '3';
          if (j == 3)
            return '-';
          break;
        case 3:
          if (j == 0)
            return '!';
          if (j == 1)
            return '0';
          if (j == 2)
            return '=';
          if (j == 3)
            return '+';
          break;
        }
      }
    }
    GPIO_PinWrite(KEYPAD_PORT, pKeypad->pKeyCfg[i]->pinNumber, HIGH);
  }
  return 'N'; // No key pressed
}
