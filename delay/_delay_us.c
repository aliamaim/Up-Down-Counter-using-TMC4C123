#include "MCAL.h"
#include <stdint.h>
#include "LCD.h"
#include "delay.h"

void _delay_us(uint32_t delay){
	
	uint32_t i;
	for(i = 0; i<delay; i++){//delay*1usec
		Systick_Wait(80);//1usec
	}
}
