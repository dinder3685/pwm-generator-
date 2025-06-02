#include "pwm_control.h"



void createPWM(TIM_HandleTypeDef *htim, uint32_t freq, uint32_t duty_percent) {
    uint32_t timer_clk = 84000000;  // APB2 clock at 84 MHz for TIM1 (adjust for your system)
    uint32_t prescaler = 83;        // Timer tick = 1 MHz
    uint32_t tick_freq = timer_clk / (prescaler + 1);
    uint32_t period = (tick_freq / freq) - 1;
    uint32_t pulse = ((period + 1) * duty_percent) / 100;

    __HAL_TIM_SET_PRESCALER(htim, prescaler);
    __HAL_TIM_SET_AUTORELOAD(htim, period);
    __HAL_TIM_SET_COMPARE(htim, TIM_CHANNEL_1, pulse);

    htim->Instance->EGR = TIM_EGR_UG;  // Force update of registers
    HAL_TIM_PWM_Start(htim, TIM_CHANNEL_1);
}
