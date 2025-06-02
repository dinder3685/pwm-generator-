
STM32 PWM Control Project
This project demonstrates PWM (Pulse Width Modulation) signal generation using STM32 HAL libraries. The createPWM() function allows dynamic adjustment of frequency and duty cycle during runtime.

Features
PWM generation via TIM1 Channel 1

Runtime modification of frequency and duty cycle

Compatible with STM32 HAL libraries

Base timer frequency: 1 MHz

Example usage provided in main.c

Files
createPWM.c: Source file containing the PWM configuration function

createPWM.h: Header file for the function declaration

main.c: Main application file

Function Usage
c
Copy
Edit
void createPWM(TIM_HandleTypeDef *htim, uint32_t freq, uint32_t duty_percent);
