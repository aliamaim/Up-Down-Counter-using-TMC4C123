#include "MCAL.h"
#include <stdint.h>

void LCD_PutsInt(int32_t num){  //fn puts numbers on LCD as characters
	char buffer[8];  //array to save values of strings
	itoa(num,buffer,10); //fn convert int to strings
	LCD_Puts(buffer); 
}
