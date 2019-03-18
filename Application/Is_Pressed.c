#include <stdint.h>
#include "app.h"
#include "MCAL.h"
#include "delay.h"

extern uint32_t counter_g;

uint8_t Is_Pressed(uint8_t port_index, uint8_t mask){
	if(DIO_ReadPort(port_index, mask)){ // check if button is pressed 
		
		_delay_ms(30); // wait 30 milliseconds to debounce
		
		//sha3'aleen pull down
		if(DIO_ReadPort(port_index, mask)) //Check again if the button is pressed
		{
			return 1;
		}
			
	}
	return 0;
}
