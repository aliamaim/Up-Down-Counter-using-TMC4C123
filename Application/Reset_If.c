#include<stdint.h>
#include "app.h"

extern uint32_t counter_g;    
void Reset_If()(uint8_t port_index ,uint8_t pin)   
{
	int m=1;
	while(Is_Pressed(port_index , pin))  //tool manta dayes 3ala button
	{
m=0;

	}
	if(m==0){counter_g=0;}

	}
