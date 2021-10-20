/**************************************************************************
 * ICU_Interface                                                          *
 *                                                                        *
 * Created: 10/20/2021 4:14:49 PM										  *
 *                                                                        *
 *  Author: Khaled Tarek                                                  *
 ***************************************************************************/ 

#include "SWITCH_Interface.h"
#include "LCD.h"
#include "Icu.h"
#include "External_Interrupt.h"
#include "avr/interrupt.h"

Icu_ValueType gu16Value = 0U;
ISR(TIMER1_CAPT_vect)
{
	gu16Value = *(uint16 *)TIMER1_INP_CAP_LOW_REG;
}

int main(void)
{
	LCD_init();
	Switch_Init(SWITCH_1);
	Icu_Init(&gastrIcu_Configuration);
	GlobaleInterrupts_StateSet(GLOBAL_INTERRUPTS_ENABLE);
    while (1)
    {
		/*!Comment:Any value above 32767 will printed on LCD a negative value because
		 LCD_IntegerDisplay is implemented by function itoa which it's range from -32768
		 to 32767 but the variable gu16Value has the exact number*/
		LCD_IntegerDisplay(gu16Value);
		_delay_ms(500);
		LCD_Clear();
    }
}

