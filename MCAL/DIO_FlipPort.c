void DIO_FlipPort(uint8 port_index ,uint8 pins_mask){

 	switch(port_index){
	case PORTA: { GPIO_PORTA_DATA_R^=pins_mask; }
	case PORTB:	{ GPIO_PORTB_DATA_R^=pins_mask; }
	case PORTC:	{ GPIO_PORTC_DATA_R^=pins_mask; }
	case PORTD:	{ GPIO_PORTD_DATA_R^=pins_mask; }
	case PORTE:	{ GPIO_PORTE_DATA_R^=pins_mask; }
	case PORTF:	{ GPIO_PORTF_DATA_R^=pins_mask; }

 }