#include <stdint.h>
#include "delay.h"
#include "app.h"

extern uint32_t counter_g;    //global varibal (3adad)

void Increment_If(uint8_t port_index ,uint8_t pin)   
{
	uint8_t mask = 0;
	mask |= (pin << 1);
	
	while(Is_Pressed(port_index , mask))  //tool manta dayes 3ala button
	{
		 counter_g++;  //zawed el raqam elly hayzhar 3ala shasha
		_delay_ms(200); //e3mel delay 0.2s bet. el increment
	}
}
