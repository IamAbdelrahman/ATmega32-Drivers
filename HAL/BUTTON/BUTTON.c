/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file BUTTON.c
 * @brief The implementation for the BUTTON driver
 *
 * @author Abdelrahman Kamal
 *
 */

/**********************************************************************
 * Includes
 **********************************************************************/
#include "BUTTON.h"

/**********************************************************************
 * Function Definitions
 **********************************************************************/
/**********************************************************************
 * Function : BUTTON_Init()
 *
 *  Description:
 *  This function is used to initialize a button connected to the MCU's channel(pin)
 *
 *  PRE-CONDITION: Configuration table needs to populated (sizeof > 0)

 *  @return void
 **********************************************************************/
void BUTTON_Init() {
	DIO_Init(BUTTON_ConfigGet());
}

/**********************************************************************
 * Function : BUTTON_Read()
 *
 * Description:
 *
 * This function is used to read the state of a Button
 * connected to the MCU's channel (pin)
 *
 * PRE-CONDITION: The channel is configured as INPUT
 * PRE-CONDITION: The channel is configured and initialized as DIO
 * PRE-CONDITION: The channel is within the maximum DIOPin_t definition
 *
 * POST-CONDITION: The channel state is returned.
 *  @param Port is the port of the pin to write using the EN_GpioX_t enum definition
 *  @param Pin is the pin to write using the EN_GpioPin_t enum definition
 *
 * @return The state of the pin as HIGH or LOW
 **********************************************************************/
EN_State_t BUTTON_Read(EN_GpioX_t Port, EN_GpioPin_t Pin) {
	return (DIO_PinRead(Port, Pin));
}
