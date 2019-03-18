#include "MCAL.h"
#include <stdint.h>
#include "LCD.h"
//print the input characterto the current cursor location 
void LCD_PrintChar(const char c){


	//select the data register 
	DIO_WritePort(LCD_CTRL_PORT, RS_MASK, (enum Dio_LevelType) STD_HIGH);

	/*write operation */
	DIO_WritePort(LCD_CTRL_PORT, RW_MASK, (enum Dio_LevelType) STD_LOW);

     
	_delay_us(1); 

	//Send the enable pulse
	DIO_WritePort(LCD_CTRL_PORT, E_MASK, (enum Dio_levelType) STD_HIGH);
    
    
	_delay_us(1); 

	#ifdef LCD_8BIT_MODE

	LCD_DATA_PORT = c;
	
	_delay_us(1);

	DIO_WritePort(LCD_CTRL_PORT,E_MASK,(enum Dio_levelType) STD_LOW);

    _delay_us(1);
    
    #else
    //4bit mode  
    //first send the Most Sig 4 bit 
    LCD_DATA_PORT =( (c & 0xF0) | (LCD_DATA_PORT & 0x0F) );
    _delay_us(1);

    DIO_WritePort(LCD_CTRL_PORT,E_MASK,(enum Dio_levelType) STD_LOW);

    _delay_us(1);

    //second send the Least sig 4 bit 
    DIO_WritePort(LCD_CTRL_PORT,E_MASK, (enum Dio_levelType) STD_HIGH);

    _delay_us(1);
    
    LCD_DATA_PORT = ( ( (c & 0x0F) << 4) | (LCD_DATA_PORT & 0x0F) );

    _delay_us(1);

    DIO_WritePort(LCD_CTRL_PORT,E_MASK, (enum Dio_levelType) STD_LOW)

    _delay_us(1);

    #endif 
}
