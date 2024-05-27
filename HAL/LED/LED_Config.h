/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file LED_Config.h
 * @brief This module contains interface definitions for the
 *  LED configuration.
 * @author Abdelrahman Kamal
 *
 */

#ifndef LED_CONFIG_H
#define	LED_CONFIG_H

/**********************************************************************
 * Includes
 **********************************************************************/
#include "DIO.h"

/**********************************************************************
 * Preprocessor Macros
 **********************************************************************/
#define LED0    0

/**********************************************************************
 * Function Prototypes
 **********************************************************************/
const ST_GpioConfig_t* const LED_ConfigGet(void);