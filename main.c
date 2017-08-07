#include "main.h"
#include "stm8s.h"
#include "gpio.h"
#include "timer.h"
#include "IGT1_203.h"
#include "adc.h"
#include "idwg.h"

/*
v0.0 IGT1-203 test

http://dotdisplay.blogspot.com/

*/

extern uint16_t ADC_res0; 

main()
{
	
	CLK_HSIPrescalerConfig(CLK_PRESCALER_CPUDIV1);	// 16MHz 
	init_gpio();	
	init_timer();
	IGT1_203_init();
	init_ADC();
	init_timer_ADC();
	init_IDWG();
	
  enableInterrupts();		
	
	while (1){

	//IGT1_203_data(ADC_res0/3);		// 
	IGT1_203_data(ADC_res0);
	IWDG_ReloadCounter();

	}
}


