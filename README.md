# STM32 PWM Control Project

This project demonstrates how to generate PWM (Pulse Width Modulation) signals using STM32 HAL libraries. With the `createPWM()` function, both the frequency and duty cycle can be adjusted dynamically during runtime.

## Features

- PWM output using TIM1 Channel 1  
- Dynamic frequency and duty cycle adjustment at runtime  
- Fully compatible with STM32 HAL libraries  
- Base timer frequency: 1 MHz  
- Example usage available in `main.c`  

## Files

- `createPWM.c`: Source file containing the PWM configuration function  
- `createPWM.h`: Header file declaring the function  
- `main.c`: Main application file demonstrating usage  

## Function Usage

```c
void createPWM(TIM_HandleTypeDef *htim, uint32_t freq, uint32_t duty_percent);
