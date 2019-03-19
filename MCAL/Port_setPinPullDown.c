#include <stdint.h>
#include "tm4c123gh6pm_custom.h"
#include "MCAL.h"

void Port_SetPinPullDown(uint8_t port_index, uint8_t pins_mask, uint8_t enable ){
	
	if(enable==1){
		
		switch(port_index){
			case PORTA:{GPIO_PORTA_PDR_R |= pins_mask;
						break;
					   }
			
			case PORTB:{GPIO_PORTB_PDR_R |= pins_mask;
					    break;
					   }
			
			case PORTC:{GPIO_PORTC_PDR_R |= pins_mask;
						break;
					   }
			
			case PORTD:{GPIO_PORTD_PDR_R |= pins_mask;
					    break;
					   }
					   
			case PORTE:{GPIO_PORTE_PDR_R |= pins_mask;
					    break;
					   }
					   
			case PORTF:{
						GPIO_PORTF_PDR_R |= pins_mask;
						break;
					   }
		}
	}
	
}
