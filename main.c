#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "MCAL.h"
#include "app.h"
#include "delay.h"



uint8_t counter1_g = 0; /* Counter which will be displayed on the LCD */
 
uint8_t counter2_g = 0;

uint8_t counter3_g = 0;


int main(void){
	uint8_t dec_flag = 0;

	Port_Init(COUNTER1_PORT, COUNTER1_MASK, 0xFFFF0000); //4Pins connected to counter1
	Port_SetPinDirection(COUNTER1_PORT, COUNTER1_MASK, (enum Port_PinDirectionType) PORT_PIN_OUT);
	
	Port_Init(COUNTER2_PORT, COUNTER2_MASK, 0x0000FFFF); //4Pins connected to counter2
	Port_SetPinDirection(COUNTER2_PORT, COUNTER2_MASK, (enum Port_PinDirectionType) PORT_PIN_OUT);
	
	Port_Init(COUNTER3_PORT, COUNTER3_MASK, 0x0000FFFF); //4Pins connected to counter3
	Port_SetPinDirection(COUNTER3_PORT, COUNTER3_MASK, (enum Port_PinDirectionType) PORT_PIN_OUT);
	
	Port_Init(BUTTONS_PORT, 0x0E, 0x0000FFF0); //3Pins connected to buttons
	Port_SetPinDirection(BUTTONS_PORT, 0x0E, (enum Port_PinDirectionType) PORT_PIN_IN);
	Port_SetPinPullDown(BUTTONS_PORT, 0x0E, ENABLE);
	
	while(1){
		
		
		
		if(!Is_Pressed(BUTTONS_PORT, DECREMENT_BUTTON) && dec_flag == 1)
			dec_flag = 0;		

		//Increment if INCREMENT BUTTON pressed
		if(Is_Pressed(BUTTONS_PORT , INCREMENT_BUTTON))
		{
			if(counter1_g >= 9 && counter2_g >= 9 && counter3_g >= 9)
			{
				counter1_g = 0;
				counter2_g = 0;
				counter3_g = 0;
				Update_Decoder();
			}
			else if(counter1_g >= 9 && counter2_g >= 9)
			{
				counter1_g = 0;
				counter2_g = 0;
				counter3_g++;
				Update_Decoder();
			}
			else if(counter1_g >= 9)
			{
				counter1_g = 0;
				counter2_g++;
				Update_Decoder();
			}
		 	else
			{
				counter1_g++;
				Update_Decoder();
			}
			_delay_ms(200); //e3mel delay 0.2s bet. el increment
	  }
		else if(Is_Pressed(BUTTONS_PORT, DECREMENT_BUTTON) && dec_flag == 0)
		{
			if(counter1_g <= 0 && counter2_g <= 0 && counter3_g <= 0)
			{
				counter1_g = 9;
				counter2_g = 9;
				counter3_g = 9;
				Update_Decoder();
			}
			else if(counter1_g <= 0 && counter2_g <= 0)
			{
				counter1_g = 9;
				counter2_g = 9;
				counter3_g--;
				Update_Decoder();
			}
			else if(counter1_g <= 0)
			{
				counter1_g = 9;
				counter2_g--;
				Update_Decoder();
			}
			else
			{
				counter1_g--;
				Update_Decoder();
			}
			dec_flag = 1;
		}
		else if(Is_Pressed(BUTTONS_PORT, RESET_BUTTON))
		{
			while(Is_Pressed(BUTTONS_PORT, RESET_BUTTON));
			counter1_g = 0;
			counter2_g = 0;
			counter3_g = 0;
			Update_Decoder();
		}
		
	
	}
	return 0;
}
