#include "LCD.h"
extern uint32_t counter_g
void Update_LCD()
{
     LCD_GoToRowCol(0,0);
     LCD_Puts("Counter Value:");
     LCD_GoToRowCol(1,3);
     LCD_PutsInt(counter_g);
}
