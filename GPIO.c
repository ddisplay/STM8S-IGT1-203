#include "GPIO.h"

void init_gpio(void) {
GPIO_Init(Scan_GPIO_PORT, (GPIO_Pin_TypeDef)Scan_GPIO_PINS, GPIO_MODE_OUT_PP_LOW_SLOW);
GPIO_Init(AudioL_GPIO_PORT, (GPIO_Pin_TypeDef)AudioL_GPIO_PINS, GPIO_MODE_OUT_PP_LOW_SLOW);

//ADC
GPIO_Init(Adc_GPIO_PORT, Adc_GPIO_PINS, GPIO_MODE_IN_FL_NO_IT);
}
