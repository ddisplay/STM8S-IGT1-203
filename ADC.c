#include "ADC.h"
#include "gpio.h"

uint16_t ADC_res0 = 0,ADC_res1 = 0; 

//-------------------init section--------------------
void init_ADC(void) {
   ADC1_DeInit();
   ADC1_ScanModeCmd(ENABLE);
   ADC1_DataBufferCmd(ENABLE);
   ADC1_ITConfig(ADC1_IT_EOCIE, ENABLE);
   ADC1_ClearITPendingBit(ADC1_IT_EOC);
   ADC1_Init(ADC1_CONVERSIONMODE_SINGLE,ADC1_CHANNEL_2,
   ADC1_PRESSEL_FCPU_D18, ADC1_EXTTRIG_TIM, ENABLE, ADC1_ALIGN_RIGHT,
   ADC1_SCHMITTTRIG_CHANNEL2, DISABLE);
	
	 ADC1_StartConversion();	// important	 
}

INTERRUPT_HANDLER(ADC1_IRQHandler, 22)
{
    ADC1_ClearITPendingBit(ADC1_IT_EOC);
    ADC_res0 = ADC1_GetBufferValue(ADC1_CHANNEL_2);
}