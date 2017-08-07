#ifndef __TIMER_H
#define __TIMER_H

#include "stm8s.h"
#include "stm8s_tim1.h"


//#define TIM4_PERIOD       124			// for 1mS
#define TIM4_PERIOD       8					// 8 for 71uS

void init_timer(void);
void init_timer_ADC(void);


#endif /* __TIMER_H */