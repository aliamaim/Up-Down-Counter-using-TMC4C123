void LCD_Puts(const char* str)
{
	while(*str != '\0')
	{
		LCD_PrintChar(*str);
		str++;
	}
}