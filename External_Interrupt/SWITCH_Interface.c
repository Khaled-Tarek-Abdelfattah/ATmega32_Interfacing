#include "SWITCH_Interface.h"
#include "Dio.h"

void Switch_Init(Switch_t switch_Button){
	switch(switch_Button){
		case SWITCH_0:
				DioDirectionSet(DIO_PORTB,DIO_PIN0,DIO_INPUT);
				break;
			case SWITCH_1:
				DioDirectionSet(DIO_PORTD,DIO_PIN6,DIO_INPUT);
				break;
			case SWITCH_2:
				DioDirectionSet(DIO_PORTD,DIO_PIN2,DIO_INPUT);
				break;
	}
}
Switch_State_t Read_Switch(Switch_t Switch_Button){
	switch (Switch_Button)
	{
	case SWITCH_0 :
		return DioChannelRead(DIO_PORTB,DIO_PIN0);
		break;
	case SWITCH_1 :
		return DioChannelRead(DIO_PORTD,DIO_PIN6);
		break;
	case SWITCH_2 :
		return DioChannelRead(DIO_PORTD,DIO_PIN2);
		break;
	default:
		return SWITCH_REALEASED;
		break;
	}
}