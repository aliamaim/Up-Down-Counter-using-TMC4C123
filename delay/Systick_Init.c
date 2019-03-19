#include "MCAL.h"
#include <stdint.h>
#include "LCD.h"
#include "tm4c123gh6pm_custom.h"
#include "delay.h"

void Systick_Init(void){
	
	NVIC_ST_CTRL_R=0;
	NVIC_ST_RELOAD_R=0X00FFFFFF;
	NVIC_ST_CURRENT_R=0;
	NVIC_ST_CTRL_R = 0X00000005;
	
}
