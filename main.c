#include <stdint.h>
#include "tm4c123gh6pm_custom.h"
#include "MCAL.h"
#include "LCD.h"
#include "app.h"


#define BUTTONS_PORT PORTD    //Buttons will be connected to PORTD
#define INCREMENT_BUTTON 0 //Increment button is at PIN0
#define DECREMENT_BUTTON 1 //Decrement button is at PIN1
#define RESET_BUTTON     2 //Reset button is at PIN2

int32_t counter_g = 0; /* Counter which will be displayed on the LCD */

void SystemInit(void){}

int main(void){
	
	LCD_Init();
	
	/* Buttons connected to this PORT */
	Port_Init(PORTD);
	
	/* Set the direction of Pin0,1,2 in PORTD to be input*/
	Port_SetPinDirection(BUTTONS_PORT, 0x07, (enum Port_PinDirectionType) PORT_PIN_IN);
	
	/* Set Pin0,1,2 in PORTD to be pull down */
	Port_SetPinPullDown(BUTTONS_PORT, 0x07, ENABLE);
	
	while(1){
		Reset_If(BUTTONS_PORT, RESET_BUTTON);
		Update_LCD();
		Increment_If(BUTTONS_PORT, INCREMENT_BUTTON);
		Update_LCD();
		Decrement_If(BUTTONS_PORT, DECREMENT_BUTTON);
		Update_LCD();
	}
	return 0;
}
