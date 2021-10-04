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
	Switch_Init(SWITCH_1);
	while (1)
	{
			Led_State(LED_0,Read_Switch(SWITCH_1));
	}
	
	return 0;
}