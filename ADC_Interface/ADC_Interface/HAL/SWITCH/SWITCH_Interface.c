/*
 * ADC.h
 *
 * Created: 10/10/2021 1:39:43 PM
 *  Author: Khaled Tarek
 */ 


#include "SWITCH_Interface.h"
#include "Dio.h"

#define DEBOUNCE_PERIOD (20U)

Dio_PinStateEnum_t sw_PrevState = DIO_LOW;

void Switch_Init(Switch_t switch_Button){
	switch(switch_Button){
		case SWITCH_0:
				DioDirectionSet(PORTB_DIR_REG,DIO_PIN0,DIO_INPUT);
				break;
			case SWITCH_1:
				DioDirectionSet(PORTD_DIR_REG,DIO_PIN6,DIO_INPUT);
				break;
			case SWITCH_2:
				DioDirectionSet(PORTD_DIR_REG,DIO_PIN2,DIO_INPUT);
				break;
	}
}
Switch_State_t Read_Switch(Switch_t Switch_Button){
	Switch_State_t localSwitchState = SWITCH_REALEASED;
	switch (Switch_Button)
	{
	case SWITCH_0 :
		if (sw_PrevState != DioChannelRead(PORTB_INPUT_REG,DIO_PIN0))
		{
			_delay_ms(DEBOUNCE_PERIOD);
			sw_PrevState = DioChannelRead(PORTB_INPUT_REG,DIO_PIN0);
		}
		localSwitchState = DioChannelRead(PORTB_INPUT_REG,DIO_PIN0);
		return localSwitchState;
		break;
	case SWITCH_1 :
		if (sw_PrevState != DioChannelRead(PORTD_INPUT_REG,DIO_PIN6))
		{
			_delay_ms(DEBOUNCE_PERIOD);
			sw_PrevState = DioChannelRead(PORTD_INPUT_REG,DIO_PIN6);
		}
		localSwitchState = DioChannelRead(PORTD_INPUT_REG,DIO_PIN6);
		return localSwitchState;
		break;
	case SWITCH_2 :
		if (sw_PrevState != DioChannelRead(PORTD_INPUT_REG,DIO_PIN2))
		{
			_delay_ms(DEBOUNCE_PERIOD);
			sw_PrevState = DioChannelRead(PORTD_INPUT_REG,DIO_PIN2);
		}
		localSwitchState = DioChannelRead(PORTD_INPUT_REG,DIO_PIN2);
		return localSwitchState;
		break;
	default:
		return localSwitchState;
		break;
	}
}