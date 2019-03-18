#include "app.h"
#include<stdint.h>
#include "MCAL.h"
#include "delay.h"
extern uint32_t counter_g;

uint8 Is_Pressed(uint8 port_index,uint8 pin){
	
	uint8 state ;
	uint8 flag = 0 ;
	State = DIO_ReadPort(port_index,pin);
	if(state!=pin){ // check if button is pressed 
		
		_delay_ms(30); // wait 30 seconds
		
		if(state!=pin){//check again
			flag = 1;
			return flag;
		
		}
			
	}
	flag = 0;
	return flag;
		
}
