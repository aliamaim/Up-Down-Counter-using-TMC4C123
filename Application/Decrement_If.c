#include <stdint.h>
#include "app.h"

extern uint32_t counter_g; //counter whose value will be displayed on the LCD

void Decrement_If(uint8_t port_index ,uint8_t pin) 
{
		uint8_t pressed = 0;
    uint8_t mask = 0;
		
    mask |= (pin << 1); //To only check the intended PIN
	
	  /* If the button is pressed set the flag to 1 and do not exit unless the button is released */
		
    while(Is_Pressed(port_index, mask)) {pressed = 1;};
		
		/* If the button was pressed decrement the counter 1 time */
		if(pressed == 1)
			counter_g--; 
}
