#include "MCAL.h"
#include "LCD.h"
#include "delay.h"



void _delay_ms(uint32_t delay){

	for(uint32_t i = 0; i<delay; i++)
  {

		Systick_Wait(80000);//delay 1msec

	}

}
