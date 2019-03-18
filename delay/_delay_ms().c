#include "std_types.h"
#include "tm4c123gh6pm.h"

void _delay_us(uint32_t delay){
	
	uint32_t i;
	for(i = 0; i<delay; i++){//delay*1usec
		Systick_wait(80);//1usec
	}
}
