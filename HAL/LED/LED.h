/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file LED.h
 * @brief The interface definition for the LCD driver
 *
 * This is the header file for the definition of the interface for
 * the LCD driver connected to the microcontroller
 * @author Abdelrahman Kamal
 *
 */


#ifndef LED_LED_H_
#define LED_LED_H_
/**********************************************************************
 * Includes
 **********************************************************************/
#include "LED_Config.h"
/**********************************************************************
 * Function Prototypes
 **********************************************************************/
void LED_Init();
void LED_On(EN_GpioX_t Port, EN_GpioPin_t Pin);
void LED_Off(EN_GpioX_t Port, EN_GpioPin_t Pin);
void LED_Toggle(EN_GpioX_t Port, EN_GpioPin_t Pin);

#endif /* LED_LED_H_ */