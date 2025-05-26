# STM32 PWM Kontrol Projesi

Bu proje, STM32 HAL kütüphaneleri kullanılarak PWM (Darbe Genişlik Modülasyonu) sinyali üretimini göstermektedir. `createPWM()` fonksiyonu ile frekans ve duty cycle değerleri dinamik olarak ayarlanabilir.

## Özellikler

- TIM1 Kanal 1 üzerinden PWM üretimi  
- Frekans ve duty cycle değerlerinin çalışma zamanında değiştirilmesi  
- HAL kütüphaneleri ile uyumlu  
- Timer temel frekansı: 1 MHz  
- `main.c` içinde örnek kullanım  

## Dosyalar

- `createPWM.c`: PWM ayarlama fonksiyonunun kaynak dosyası  
- `createPWM.h`: Fonksiyonun başlık dosyası  
- `main.c`: Uygulamanın ana dosyası  

## Fonksiyon Kullanımı

void createPWM(TIM_HandleTypeDef *htim, uint32_t freq, uint32_t duty_percent);
