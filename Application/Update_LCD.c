#include "LCD.h"
#include <stdint.h>

extern uint32_t counter_g
void Update_LCD()
{
     LCD_GoToRowCol(0,0); //every iteration the cursor go to the first place to print our text to prevet overwrite
     LCD_Puts("Counter Value:"); 
     LCD_GoToRowCol(1,3);
     LCD_PutsInt(counter_g);
}
