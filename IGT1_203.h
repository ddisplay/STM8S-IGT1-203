#ifndef __IGT1_203_H
#define __IGT1_203_H

#include "stm8s.h"
#include "GPIO.h"
#include "main.h"
#include "delay.h"

//#define Refresh_Rate	142
#define NUMBER_OF_BARS  203


void IGT1_203_init(void);
void IGT1_203_scan(void);
void IGT1_203_data(uint8_t L);

#endif /* __IGT1_203_H */