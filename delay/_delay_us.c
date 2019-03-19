#include "MCAL.h"
#include <stdint.h>
#include "LCD.h"
#include "tm4c123gh6pm_custom.h"
#include  "delay.h"

void _delay_us(uint32_t delay){
	
	int i;
	for(i = 0; i < delay; i++)
	{
		//delay*1usec
		Systick_Wait(80);//1usec
	}
}
