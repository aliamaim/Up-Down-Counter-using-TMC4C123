void LCD_Init()
{
    Port_Init(LCD_CTRL_PORT);
    Port_Init(LCD_DATA_PORT);
    Port_SetPinDirection(LCD_CTRL_PORT , CTRL_MASK , PORT_PIN_OUT);
    
    #ifdef LCD_8BIT_MODE
          Port_SetPinDirection(LCD_DATA_PORT , DATA_8BIT_MASK , PORT_PIN_OUT);
          LCD_Command(LCD_8bit_2line_Mode);
    #else
          Port_SetPinDirection(LCD_DATA_PORT , DATA_4BIT_MASK , PORT_PIN_OUT);
          LCD_Command(LCD_4bit_2line_Mode);
    #endif
          LCD_Command(LCD_Clear_Display);
          LCD_Command(LCD_Display_On_Cursor_Blink);
 }
    
    
