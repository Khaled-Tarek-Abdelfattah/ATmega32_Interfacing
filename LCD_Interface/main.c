#include "Lcd.h"

int main(void)
{
	LCD_init();
    while (1) 
    {
		LCD_Display_ShiftLeft();
		LCD_RowCol_Select(0,0);
		LCD_StringDisplay("Hey!!");
		LCD_RowCol_Select(1,2);
		LCD_StringDisplay("Welcome to LCD");
		LCD_RowCol_Select(0,7);
		LCD_Cursor_ShiftLeft();
		LCD_IntegerDisplay(152);
    }
}

