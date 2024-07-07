/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file 7-SEG.c
 * @brief The implementation for the 7-SEG driver
 *
 * @author Abdelrahman Kamal
 *
 */

/**********************************************************************
 * Includes
 **********************************************************************/
#include "7-SEG.h"

extern vuint8_t SEG_CfgSize;
extern TYPE volatile *DataDir[NUMBER_OF_PORTS];
extern void initializeDataArrays();
/**********************************************************************
 * Function Definitions
 **********************************************************************/
/**********************************************************************
 * Function : SevenSeg_Init()
 *
 *  Description:
 *  This function is used to initialize a 7-segment connected to the MCU's
 channel(pin)
 *  @param pSEG is the pointer to the configuration structure ST_SEG_t
 *  PRE-CONDITION: Configuration table needs to populated (sizeof > 0)

 *  @return void
 **********************************************************************/
void SevenSeg_Init(ST_SEG_t *pSEG) {
  initializeDataArrays();
  vuint8_t i = 0, j = 0, PortNumber = 0, PinNumber = 0;
  for (i = 0; i < SEG_CfgSize; i++) {
    PortNumber = pSEG->segPort % NUMBER_OF_PORTS;
    for (j = 0; j < NUMBER_OF_PINS_PER_PORT; j++) {
      PinNumber = pSEG->segPins[i] % NUMBER_OF_PINS_PER_PORT;
      if (pSEG->segState == GPIO_OUTPUT)
        SET_BIT(*(DataDir[PortNumber]), PinNumber);
    }
  }
}
/**********************************************************************
 * Function : SevenSeg_Display()
 *
 *  Description:
 *  This function is used to display a digit on
 *  a 7-segment connected to the MCU's channel(pin)
 *
 *  PRE-CONDITION: The 7-seg is initialized

 *  @param pSEG is the pointer to the configuration structure ST_SEG_t
 *  @param display is the input digit by the user to be displayed from (0:9),
 otherwise
 * the input letter by the user.

 *  @return void
 **********************************************************************/
void SevenSeg_Display(ST_SEG_t *pSEG, vuint8_t display) {
  switch (display) {
  case 0:
    GPIO_WritePort(pSEG->segPort, ZERO);
    break;
  case 1:
    GPIO_WritePort(pSEG->segPort, ONE);
    break;
  case 2:
    GPIO_WritePort(pSEG->segPort, TWO);
    break;
  case 3:
    GPIO_WritePort(pSEG->segPort, THREE);
    break;
  case 4:
    GPIO_WritePort(pSEG->segPort, FOUR);
    break;
  case 5:
    GPIO_WritePort(pSEG->segPort, FIVE);
    break;
  case 6:
    GPIO_WritePort(pSEG->segPort, SIX);
    break;
  case 7:
    GPIO_WritePort(pSEG->segPort, SEVEN);
    break;
  case 8:
    GPIO_WritePort(pSEG->segPort, EIGHT);
    break;
  case 9:
    GPIO_WritePort(pSEG->segPort, NINE);
    break;
  case 'A':
    GPIO_WritePort(pSEG->segPort, A);
    break;
  case 'B':
    GPIO_WritePort(pSEG->segPort, B);
    break;
  case 'C':
    GPIO_WritePort(pSEG->segPort, C);
    break;
  case 'E':
    GPIO_WritePort(pSEG->segPort, E);
    break;
  case 'F':
    GPIO_WritePort(pSEG->segPort, F);
    break;
  case 'H':
    GPIO_WritePort(pSEG->segPort, H);
    break;
  case 'L':
    GPIO_WritePort(pSEG->segPort, L);
    break;
  case 'O':
    GPIO_WritePort(pSEG->segPort, O);
    break;
  case 'P':
    GPIO_WritePort(pSEG->segPort, P);
    break;
  case 'S':
    GPIO_WritePort(pSEG->segPort, S);
    break;
  case 'U':
    GPIO_WritePort(pSEG->segPort, U);
  default:
    break;
  }
}

/**********************************************************************
 * Function : SevenSegment_Clear()
 *
 *  Description:
 *  This function is used to clear
 *  a 7-segment connected to the MCU's channel(pin)
 *
 *  PRE-CONDITION: The 7-seg is initialized

 *  @param pSEG is the pointer to the configuration structure ST_SEG_
 *  @return void
 **********************************************************************/
void SevenSegment_Clear(ST_SEG_t *pSEG) { GPIO_WritePort(pSEG->segPort, 0X00); }