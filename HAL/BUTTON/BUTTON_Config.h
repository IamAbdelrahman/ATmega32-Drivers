/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file BUTTON_Config.h
 * @brief This module contains interface definitions for the
 *  BUTTON configuration.
 * @author Abdelrahman Kamal
 *
 */

#ifndef BUTTON_CONFIG_H
#define	BUTTON_CONFIG_H

/**********************************************************************
 * Includes
 **********************************************************************/
#include "DIO.h"

/**********************************************************************
 * Preprocessor Macros
 **********************************************************************/
#define BUTTON0    0

/**********************************************************************
 * Function Prototypes
 **********************************************************************/
const ST_GpioConfig_t* const BUTTON_ConfigGet(void);

#endif