#include <stdint.h>
#include "app.h"

extern uint8_t counter1_g;
extern uint8_t counter2_g;
extern uint8_t counter3_g;

void Reset_If(uint8_t port_index ,uint8_t pin)   
{
	int m = 1;
	while(Is_Pressed(port_index , pin))  //tool manta dayes 3ala button
	{
		m = 0;
	}
	if(m == 0)
	{
		counter1_g = 0;
		counter2_g = 0;
		counter3_g = 0;
	}
}

