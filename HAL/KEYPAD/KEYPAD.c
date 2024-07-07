/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file KEYPAD.c
 * @brief The implementation for the KEYPAD driver
 *
 * @author Abdelrahman Kamal
 *
 */

/**********************************************************************
 * Includes
 **********************************************************************/
#include "KEYPAD.h"

/**********************************************************************
 * Preprocessor Macros
 **********************************************************************/

/**********************************************************************
 * Typedefs
 **********************************************************************/

/**********************************************************************
 * Module Variables
 **********************************************************************/
const vuint8_t Keypad_Rows[] = {ROW0, ROW1, ROW2, ROW3};
const vuint8_t Keypad_Cols[] = {COL0, COL1, COL2, COL3};
vuint8_t Rows_Size = sizeof(Keypad_Rows) / sizeof(Keypad_Rows[0]);
vuint8_t Cols_Size = sizeof(Keypad_Cols) / sizeof(Keypad_Cols[0]);
/**********************************************************************
 * Function Definitions
 **********************************************************************/

/**********************************************************************
 * Function : KEYPAD_Init()
 *
 *  Description:
 *  This function is used to initialize the KEYPAD device
 *  through setting the row pins as output and columns pins as input.
 *  PRE-CONDITION: Configuration table needs to populated (sizeof > 0)

 *  @return void
 **********************************************************************/
void KEYPAD_Init() {
  GPIO_Init(KEYPAD_ConfigGet());
  vuint8_t i = 0;
  for (i = 0; i < Rows_Size; i++) {
    GPIO_PinWrite(KEYPAD_PORT, Keypad_Rows[i], HIGH);
  }
}

/**********************************************************************
 * Function : KEYPAD_getKey()
 *
 *  Description:
 *  This function is used to get the key pressed on the KEYPAD
 * through applying the key-detection algorithm.
 *  PRE-CONDITION: KEYPAD is initialized

 *  @return key pressed.
 **********************************************************************/
vuint8_t KEYPAD_getKey() {
  vuint8_t i, j = 0;
  for (i = 0; i < Rows_Size; i++) {
    GPIO_PinWrite(KEYPAD_PORT, ROW0, HIGH);
    GPIO_PinWrite(KEYPAD_PORT, ROW1, HIGH);
    GPIO_PinWrite(KEYPAD_PORT, ROW2, HIGH);
    GPIO_PinWrite(KEYPAD_PORT, ROW3, HIGH);
    GPIO_PinWrite(KEYPAD_PORT, Keypad_Rows[i], LOW);
    for (j = 0; j < Cols_Size; j++) {
      if (!(GPIO_PinRead(KEYPAD_PORT, Keypad_Cols[j]))) {
        while (!(GPIO_PinRead(KEYPAD_PORT, Keypad_Cols[j])))
          ;
        switch (i) {
        case ROW0:
          if (j == 0)
            return '7';
          if (j == 1)
            return '8';
          if (j == 2)
            return '9';
          if (j == 3)
            return '/';
          break;
        case ROW1:
          if (j == 0)
            return '4';
          if (j == 1)
            return '5';
          if (j == 2)
            return '6';
          if (j == 3)
            return '*';
          break;
        case ROW2:
          if (j == 0)
            return '1';
          if (j == 1)
            return '2';
          if (j == 2)
            return '3';
          if (j == 3)
            return '-';
          break;
        case ROW3:
          if (j == 0)
            return '!';
          if (j == 1)
            return '0';
          if (j == 2)
            return '=';
          if (j == 3)
            return '+';
          break;
        default:
          break;
        }
      }
    }
  }
  return 'N';
}