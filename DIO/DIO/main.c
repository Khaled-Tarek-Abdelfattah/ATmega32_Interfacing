#include "ATMEGA32A_Config.h"
#include "Macros.h"
#include "Dio.h"
#include "LED_Interface.h"
#include "SWITCH_Interface.h"
#include <util/delay.h>

int main(void)
{
	//initialization
	Led_Init(LED_0);
	Led_Init(LED_1);
	Led_Init(LED_2);
	Switch_Init(SWITCH_0);
	Switch_Init(SWITCH_1);
	while (1)
	{
		if (Read_Switch(SWITCH_0))
		{while(1)
			{
			Led_Toggle(LED_0);
			_delay_ms(300);
			Led_Toggle(LED_0);
			Led_Toggle(LED_1);
			_delay_ms(300);
			Led_Toggle(LED_1);
			Led_Toggle(LED_2);
			_delay_ms(300);
			Led_Toggle(LED_2);
			}
		}
	}
	
	return 0;
}