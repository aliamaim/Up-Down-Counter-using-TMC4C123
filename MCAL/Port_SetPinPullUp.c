#include "std_types.h"
#include "tm4c123gh6pm.h"
#include "MCAL.h"

void Port_SetPinPullUp(uint8 port_index, uint8 pins_mask, uint8 enable ){
	
	if(enable==1){
		
		switch(port_index){
			case PORTA:GPIO_PORTA_PUR_R |= pins_mask;
			
			case PORTB:GPIO_PORTB_PUR_R |= pins_mask;
			
			case PORTC:GPIO_PORTC_PUR_R |= pins_mask;
			
			case PORTD:GPIO_PORTD_PUR_R |= pins_mask;
			
			case PORTE:GPIO_PORTE_PUR_R |= pins_mask;
			
			case PORTF:GPIO_PORTF_PUR_R |= pins_mask;
			
		}
	}
	
}