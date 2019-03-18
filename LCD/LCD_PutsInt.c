#include "MCAL.h"
#include <stdint.h>
#include <stdio.h>

void LCD_PutsInt(int32_t num){  //fn puts numbers on LCD as characters
	char buffer[8];  //array to save values of strings
	sprintf(buffer,"%d",num);
	LCD_Puts(buffer); 
}
