#include "igt1_203.h"

uint8_t i = 0, j = 0, R_cmp, L_cmp;

void IGT1_203_init(void){

GPIO_WriteHigh (Scan_GPIO_PORT,QR);	// on
GPIO_WriteLow (Scan_GPIO_PORT,Q1);	// off
GPIO_WriteLow (Scan_GPIO_PORT,Q2);
GPIO_WriteLow (Scan_GPIO_PORT,Q3);
GPIO_WriteLow (Scan_GPIO_PORT,Q4);	// off
GPIO_WriteLow (Scan_GPIO_PORT,Q5);

GPIO_WriteHigh (AudioL_GPIO_PORT,A1);	// on
}

void IGT1_203_scan(void){
 
switch (i){
			
			case 0:
			GPIO_WriteHigh (Scan_GPIO_PORT,QR);	// on
			GPIO_WriteLow (Scan_GPIO_PORT,Q1);	// off
			GPIO_WriteLow (Scan_GPIO_PORT,Q2);
			GPIO_WriteLow (Scan_GPIO_PORT,Q3);
			GPIO_WriteLow (Scan_GPIO_PORT,Q4);
			GPIO_WriteLow (Scan_GPIO_PORT,Q5);
			
			break;
			
			case 1:
			GPIO_WriteLow (Scan_GPIO_PORT,QR);	// 
			GPIO_WriteHigh (Scan_GPIO_PORT,Q1);	// 
			GPIO_WriteLow (Scan_GPIO_PORT,Q2);
			GPIO_WriteLow (Scan_GPIO_PORT,Q3);
			GPIO_WriteLow (Scan_GPIO_PORT,Q4);
			GPIO_WriteLow (Scan_GPIO_PORT,Q5);			
			break;
			
			case 2:
			GPIO_WriteLow (Scan_GPIO_PORT,QR);	// 
			GPIO_WriteLow (Scan_GPIO_PORT,Q1);	// 
			GPIO_WriteHigh (Scan_GPIO_PORT,Q2);
			GPIO_WriteLow (Scan_GPIO_PORT,Q3);
			GPIO_WriteLow (Scan_GPIO_PORT,Q4);
			GPIO_WriteLow (Scan_GPIO_PORT,Q5);			
			break;			

			case 3:
			GPIO_WriteLow (Scan_GPIO_PORT,QR);	// 
			GPIO_WriteLow (Scan_GPIO_PORT,Q1);	// 
			GPIO_WriteLow (Scan_GPIO_PORT,Q2);
			GPIO_WriteHigh (Scan_GPIO_PORT,Q3);
			GPIO_WriteLow (Scan_GPIO_PORT,Q4);
			GPIO_WriteLow (Scan_GPIO_PORT,Q5);			
			break;		

			case 4:
			GPIO_WriteLow (Scan_GPIO_PORT,QR);	// 
			GPIO_WriteLow (Scan_GPIO_PORT,Q1);	// 
			GPIO_WriteLow (Scan_GPIO_PORT,Q2);
			GPIO_WriteLow (Scan_GPIO_PORT,Q3);
			GPIO_WriteHigh (Scan_GPIO_PORT,Q4);
			GPIO_WriteLow (Scan_GPIO_PORT,Q5);			
			break;		
			
			case 5:
			GPIO_WriteLow (Scan_GPIO_PORT,QR);	// 
			GPIO_WriteLow (Scan_GPIO_PORT,Q1);	// 
			GPIO_WriteLow (Scan_GPIO_PORT,Q2);
			GPIO_WriteLow (Scan_GPIO_PORT,Q3);
			GPIO_WriteLow (Scan_GPIO_PORT,Q4);
			GPIO_WriteHigh (Scan_GPIO_PORT,Q5);			
			break;				

			default:
			break;

}

	if (j >= L_cmp){
	GPIO_WriteHigh (AudioL_GPIO_PORT,A1);	// on
	}
	else{
	GPIO_WriteLow (AudioL_GPIO_PORT,A1);	// off
	}


	i++;
	if (i >= 6){
		i = 1;
	}
	j++;	
	if (j >= NUMBER_OF_BARS){
	i = 0;
	j = 0;
	}

}

void IGT1_203_data(uint8_t L){

	//L = 255;			//test ADC value

	if (L >= NUMBER_OF_BARS){
	L_cmp = NUMBER_OF_BARS;
	}
	else{
	L_cmp = L;
	}


}