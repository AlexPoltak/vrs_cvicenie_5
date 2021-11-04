/**
  ******************************************************************************
  * @file    gpio.h
  * @brief   This file contains all the function prototypes for
  *          the gpio.c file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
// defines for input port used by button
#define		GPIO_PORT_BUTTON				GPIOB
#define		GPIO_PIN_BUTTON					4

// defines for "checkButtonState"
#define		TRIGGER_RISE					0
#define		TRIGGER_FALL					1

#define		BUTTON_EXTI_TRIGGER				TRIGGER_FALL
#define		BUTTON_EXTI_SAMPLES_WINDOW		30
#define		BUTTON_EXTI_SAMPLES_REQUIRED	20


/**
 *  Function checks if the button was pressed or EXTI detection was false - positive.
 *  @input_param_1 - PORT: GPIO port connected to button.
 *  @input_param_2 - PIN: GPIO pin connected to button.
 *  @input_param_3 - edge: EXTI trigger edge. Defines what is the input GPIO idle state after the button is pressed.
 *  					   TRIGGER_RISE - input is expected to be "1" after EXTI was triggered.
 *  					   TRIGGER_FALL - input is expected to be "0" after EXTI was triggered.
 *  @input_param_4 - samples_window: How many samples are checked (input port is read) after EXTI is triggered.
 *  @input_param_5 - samples_required: How many samples in row are required to be in the idle state.
 */
uint8_t checkButtonState(GPIO_TypeDef* PORT, uint8_t PIN, uint8_t edge, uint8_t samples_window, uint8_t samples_required);

/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
