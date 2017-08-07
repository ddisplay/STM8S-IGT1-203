#include "IDWG.h"

//-------------------init section--------------------
void init_IDWG(void) {
	
	 /* Enable the IWDG*/
   IWDG_Enable();
   /* Enable the access to the IWDG registers*/
   IWDG_WriteAccessCmd(IWDG_WriteAccess_Enable);
   /* Fixe IWDG Reset period */
   IWDG_SetPrescaler(IWDG_Prescaler_128);
   IWDG_SetReload(0x00FF);								// 0xFFFF ~ 1sec, prescaler 256; 0x00FF ~ 0.5 sec, prescaler 128
   /* Refresh IWDG */
   IWDG_ReloadCounter();

}

