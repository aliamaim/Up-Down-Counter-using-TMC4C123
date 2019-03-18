#include "MCAL.h"
#include <stdint.h>
#include "LCD.h"
#include "tm4c123gh6pm.h"



void _delay_ms(uint32_t delay){

	for(uint32_t i = 0; i<delay; i++)
  {

		Systick_wait(80000);//delay 1msec

	}

}
