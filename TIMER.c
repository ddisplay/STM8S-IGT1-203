#include "TIMER.h"
#include "IGT1_203.h"

void init_timer(void) {

  /* Time base configuration */
  TIM4_TimeBaseInit(TIM4_PRESCALER_128, TIM4_PERIOD);
  /* Clear TIM4 update flag */
  TIM4_ClearFlag(TIM4_FLAG_UPDATE);
  /* Enable update interrupt */
  TIM4_ITConfig(TIM4_IT_UPDATE, ENABLE);

  TIM4_Cmd(ENABLE);
}

void init_timer_ADC(void){

   TIM1_DeInit();
	 TIM1_TimeBaseInit(128 - 1, TIM1_COUNTERMODE_UP, 1250 - 1, 0);
   TIM1_SelectOutputTrigger(TIM1_TRGOSOURCE_UPDATE);
	 
   TIM1_Cmd(ENABLE);
}


INTERRUPT_HANDLER(TIM4_UPD_OVF_IRQHandler, 23)
{
  IGT1_203_scan();
	/* Cleat Interrupt Pending bit */
  TIM4_ClearITPendingBit(TIM4_IT_UPDATE);
}

