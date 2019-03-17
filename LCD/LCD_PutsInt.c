void LCD_PutsInt(sint32_t num){
	char buffer[8];
	itoa(num,buffer,10);
	LCD_Puts(buffer);
}