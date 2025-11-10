/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Pin GPIO_PIN_2
#define LED1_GPIO_Port GPIOE
#define PRESENCA5_Pin GPIO_PIN_3
#define PRESENCA5_GPIO_Port GPIOE
#define PRESENCA5_EXTI_IRQn EXTI3_IRQn
#define LED2_Pin GPIO_PIN_4
#define LED2_GPIO_Port GPIOE
#define PRESENCA1_Pin GPIO_PIN_5
#define PRESENCA1_GPIO_Port GPIOE
#define PRESENCA1_EXTI_IRQn EXTI9_5_IRQn
#define LED3_Pin GPIO_PIN_6
#define LED3_GPIO_Port GPIOE
#define LED4_Pin GPIO_PIN_0
#define LED4_GPIO_Port GPIOC
#define LED5_Pin GPIO_PIN_2
#define LED5_GPIO_Port GPIOC
#define LED6_Pin GPIO_PIN_0
#define LED6_GPIO_Port GPIOA
#define LED7_Pin GPIO_PIN_2
#define LED7_GPIO_Port GPIOA
#define LED8_Pin GPIO_PIN_4
#define LED8_GPIO_Port GPIOA
#define BANDEIRA_Pin GPIO_PIN_6
#define BANDEIRA_GPIO_Port GPIOA
#define FAIXA2_Pin GPIO_PIN_10
#define FAIXA2_GPIO_Port GPIOB
#define FAIXA2_EXTI_IRQn EXTI15_10_IRQn
#define MICROSTART_Pin GPIO_PIN_15
#define MICROSTART_GPIO_Port GPIOB
#define DIPS0_Pin GPIO_PIN_10
#define DIPS0_GPIO_Port GPIOD
#define FAIXA3_Pin GPIO_PIN_11
#define FAIXA3_GPIO_Port GPIOD
#define FAIXA3_EXTI_IRQn EXTI15_10_IRQn
#define DIPS1_Pin GPIO_PIN_12
#define DIPS1_GPIO_Port GPIOD
#define DIPS2_Pin GPIO_PIN_14
#define DIPS2_GPIO_Port GPIOD
#define FAIXA1_Pin GPIO_PIN_15
#define FAIXA1_GPIO_Port GPIOD
#define FAIXA1_EXTI_IRQn EXTI15_10_IRQn
#define MOTOR_D_ENABLE_Pin GPIO_PIN_7
#define MOTOR_D_ENABLE_GPIO_Port GPIOD
#define MOTOR_E_ENABLE_Pin GPIO_PIN_5
#define MOTOR_E_ENABLE_GPIO_Port GPIOB
#define PRESENCA3_Pin GPIO_PIN_6
#define PRESENCA3_GPIO_Port GPIOB
#define PRESENCA3_EXTI_IRQn EXTI9_5_IRQn
#define PRESENCA2_Pin GPIO_PIN_8
#define PRESENCA2_GPIO_Port GPIOB
#define PRESENCA2_EXTI_IRQn EXTI9_5_IRQn
#define PRESENCA4_Pin GPIO_PIN_0
#define PRESENCA4_GPIO_Port GPIOE
#define PRESENCA4_EXTI_IRQn EXTI0_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
