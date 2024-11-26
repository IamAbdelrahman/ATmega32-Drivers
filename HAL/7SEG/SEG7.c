/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/

/*****************************************************************************
 * FILE DESCRIPTION
 * ----------------------------------------------------------------------------
 * @file SEG7.c
 * @brief The implementation for the SEG7 driver
 *
 ****************************************************************************/

/*- INCLUDES
-----------------------------------------------------------------------*/
#include "SEG7.h"

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
extern vuint8_t configSizeSeg7;
extern TYPE volatile *const Data[NUMBER_OF_PORTS];
extern TYPE volatile *const dataDir[NUMBER_OF_PORTS];

/*- LOCAL FUNCTIONS IMPLEMENTATION
-----------------------------------------------------------------------*/

/*- APIs IMPLEMENTATION
-----------------------------------------------------------------------*/
void SEG7_Init(void) {
  const ST_SEG7Config_t *const pSeg7 = SEG7_ConfigGet();
  vuint8_t i = 0;
  for (i = 0; i < configSizeSeg7; i++) {
    GPIO_Init(pSeg7->pSegCfg[i], 1);
  }
}
void SEG7_Display(vuint8_t Digit) {
  switch (Digit) {
  case 0:
    GPIO_PortWrite(SEG_PORT, ZERO);
    break;
  case 1:
    GPIO_PortWrite(SEG_PORT, ONE);
    break;
  case 2:
    GPIO_PortWrite(SEG_PORT, TWO);
    break;
  case 3:
    GPIO_PortWrite(SEG_PORT, THREE);
    break;
  case 4:
    GPIO_PortWrite(SEG_PORT, FOUR);
    break;
  case 5:
    GPIO_PortWrite(SEG_PORT, FIVE);
    break;
  case 6:
    GPIO_PortWrite(SEG_PORT, SIX);
    break;
  case 7:
    GPIO_PortWrite(SEG_PORT, SEVEN);
    break;
  case 8:
    GPIO_PortWrite(SEG_PORT, EIGHT);
    break;
  case 9:
    GPIO_PortWrite(SEG_PORT, NINE);
    break;
  case 'A':
    GPIO_PortWrite(SEG_PORT, A);
    break;
  case 'B':
    GPIO_PortWrite(SEG_PORT, B);
    break;
  case 'C':
    GPIO_PortWrite(SEG_PORT, C);
    break;
  case 'E':
    GPIO_PortWrite(SEG_PORT, E);
    break;
  case 'F':
    GPIO_PortWrite(SEG_PORT, F);
    break;
  case 'H':
    GPIO_PortWrite(SEG_PORT, H);
    break;
  case 'L':
    GPIO_PortWrite(SEG_PORT, L);
    break;
  case 'O':
    GPIO_PortWrite(SEG_PORT, O);
    break;
  case 'P':
    GPIO_PortWrite(SEG_PORT, P);
    break;
  case 'S':
    GPIO_PortWrite(SEG_PORT, S);
    break;
  case 'U':
    GPIO_PortWrite(SEG_PORT, U);
  default:
    break;
  }
}

void SEG7_Clear(void) { GPIO_PortWrite(SEG_PORT, 0X00); }
