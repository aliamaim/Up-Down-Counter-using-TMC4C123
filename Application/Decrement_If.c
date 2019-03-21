#include <stdint.h>
#include "app.h"

extern uint8_t counter1_g; 
extern uint8_t counter2_g; 
extern uint8_t counter3_g; 

void Decrement_If(uint8_t port_index ,uint8_t pin) 
{
		uint8_t pressed = 0;
    //uint8_t mask = 0;
		//mask |= (pin << 1); //To only check the intended PIN
	
	  /* If the button is pressed set the flag to 1 and do not exit unless the button is released */
		while(Is_Pressed(port_index, pin)) {pressed = 1;};
		
		/* If the button was pressed decrement the counter 1 time */
		if(pressed == 1)
		{
			if(counter1_g <= 0)
			{
				counter1_g = 9;
				if(counter2_g <= 0)
				{
					counter2_g = 9;
					if(counter3_g > 0)
					{
						counter3_g--;
					}
				}
				else
				{
					counter2_g--;
				}
			}
			else
			{
				counter1_g--;
			}
		}			
}
