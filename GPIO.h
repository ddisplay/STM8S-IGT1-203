#ifndef __GPIO_H
#define __GPIO_H

#include "stm8s_gpio.h"

/*
IGT1_203 Test

A1 (8)	- PB2

Q1 (4)	- PD0
Q2 (3)	- PD1
Q3 (2)	- PD2
Q4 (7)	- PD3
Q5 (1)	- PD4
QR (6)	- PC5

*/

#define Scan_GPIO_PORT  (GPIOD)				// SelfScan port
#define Q1  			GPIO_PIN_0  			// Q1
#define Q2  			GPIO_PIN_1  			// Q2
#define Q3  			GPIO_PIN_2  			// Q3
#define Q4  			GPIO_PIN_3  			// Q1
#define Q5  			GPIO_PIN_4  			// Q2
#define QR  			GPIO_PIN_5  			// QR
#define Scan_GPIO_PINS  (GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5)


#define AudioL_GPIO_PORT  (GPIOD)			// Audio level port
#define A1  			GPIO_PIN_6  				// A1
#define AudioL_GPIO_PINS  (GPIO_PIN_6)


#define Adc_GPIO_PORT  (GPIOB)				// ADC port	PORTB 2
#define Adc_GPIO_PINS  (GPIO_PIN_2)

void init_gpio(void);


#endif /* __GPIO_H */