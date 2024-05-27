/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file SEG_Config.h
 * @brief This module contains interface definitions for the
 *  7-SEG configuration.
 * @author Abdelrahman Kamal
 *
 */

#ifndef SEG_CONFIG_H
#define	SEG_CONFIG_H

/**********************************************************************
 * Includes
 **********************************************************************/
#include "DIO.h"

/**********************************************************************
 * Preprocessor Macros
 **********************************************************************/
#define SEG_PORT    PORTA

/**********************************************************************
 * Function Prototypes
 **********************************************************************/
const ST_GpioConfig_t* const SEG_ConfigGet(void);

#endif /** _SEG_H **/