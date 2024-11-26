/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/

/*****************************************************************************
 * FILE DESCRIPTION
 * ----------------------------------------------------------------------------
 *	@file: SEG7_Cfg.h
 *	@brief This module contains interface definitions for the
 *   Seven Segment display configuration.
 *****************************************************************************/

#ifndef CFG_SEG7_CFG_H_
#define CFG_SEG7_CFG_H_

/*- INCLUDES
-----------------------------------------------------------------------*/
#include "GPIO.h"

/*- GLOBAL MACROS
-----------------------------------------------------------------------*/
#define SEG_PORT PORTA
#define SEG_PINS (8U)
/*- DEFINE SEG7 COMMON CATHODE CONFIGURATION */
#define ZERO (0x3F)
#define ONE (0x05)
#define TWO (0x5B)
#define THREE (0x4F)
#define FOUR (0x66)
#define FIVE (0x6D)
#define SIX (0x7D)
#define SEVEN (0x07)
#define EIGHT (0x7F)
#define NINE (0x6F)
#define A (0x77)
#define B (0x7C)
#define C (0x39)
#define E (0x79)
#define F (0x71)
#define H (0x76)
#define L (0x38)
#define O (0x3F)
#define P (0x73)
#define S (0x6D)
#define U (0x3E)

/*- SEG7 PINS CONFIGURATION */
#define SEG0                                                                   \
  (ST_GPIOConfig_t) { SEG_PORT, Pin0, GPIO_OUTPUT }
#define SEG1                                                                   \
  (ST_GPIOConfig_t) { SEG_PORT, Pin1, GPIO_OUTPUT }
#define SEG2                                                                   \
  (ST_GPIOConfig_t) { SEG_PORT, Pin2, GPIO_OUTPUT }
#define SEG3                                                                   \
  (ST_GPIOConfig_t) { SEG_PORT, Pin3, GPIO_OUTPUT }
#define SEG4                                                                   \
  (ST_GPIOConfig_t) { SEG_PORT, Pin4, GPIO_OUTPUT }
#define SEG5                                                                   \
  (ST_GPIOConfig_t) { SEG_PORT, Pin5, GPIO_OUTPUT }
#define SEG6                                                                   \
  (ST_GPIOConfig_t) { SEG_PORT, Pin6, GPIO_OUTPUT }
#define SEG7                                                                   \
  (ST_GPIOConfig_t) { SEG_PORT, Pin7, GPIO_OUTPUT }

#define SEGCFG                                                                 \
  (ST_SEG7Config_t) { &SEG0, &SEG1, &SEG2, &SEG3, &SEG4, &SEG5, &SEG6, &SEG7 }

/*- GLOBAL TYPEDEFS
-----------------------------------------------------------------------*/
typedef struct {
  ST_GPIOConfig_t *pSegCfg[SEG_PINS];
} ST_SEG7Config_t;

/*- GLOBAL VARIABLES
-----------------------------------------------------------------------*/

/*- APIs PROTOTYPES
-----------------------------------------------------------------------*/
/************************************************************************
 * Service Name: SEG7_ConfigGet
 * Syntax: const ST_SEG7Config_t *const SEG7_ConfigGet(void)
 * Sync/Async: Synchronous
 * Reentrancy: Non reentrant
 * @description: A helper function to initialize the SEG7 based on a config
 * table.
 * @param (in): None
 * @param (inout): None
 * @param (out): None
 * @return: const ST_SEG7Config_t* const
 *************************************************************************/
const ST_SEG7Config_t *const SEG7_ConfigGet(void);

#endif /* CFG_SEG7_CFG_H_ */
