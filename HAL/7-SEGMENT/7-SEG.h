/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file 7-SEG.h
 * @brief The interface definition for the 7-segment Driver
 *
 * This is the header file for the definition of the interface for
 * the 7-segment driver connected to the microcontroller
 * @author Abdelrahman Kamal
 *
 */

#ifndef _SEG_H
#define	_SEG_H

/**********************************************************************
 * Includes
 **********************************************************************/
#include "7-SEG_Config.h"

/**********************************************************************
 * Function Prototypes
 **********************************************************************/
void SevenSegment_Init();
void SevenSegment_DisplayDigit(EN_GpioX_t Port, vuint8_t digit);
void SevenSegment_DisplayLetter(EN_GpioX_t Port, vuint8_t letter);
void SevenSegment_Clear(EN_GpioX_t Port);

#endif	/* _SEG_H */

