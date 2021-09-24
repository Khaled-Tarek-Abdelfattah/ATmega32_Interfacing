#include "Dio.h"
#include "ATMEGA32A_Config.h"
#include "Macros.h"

void DioDirectionSet(Dio_PortEnum_t port,Dio_PinEnum_t pin,Dio_PinDirEnum_t dir){
	volatile uint8 *pu8Reg=NULL_PTR;
	switch(port){
		case DIO_PORTA:
			pu8Reg=PORTA_DIR_REG;
			break;
		case DIO_PORTB:
			pu8Reg=PORTB_DIR_REG;
			break;
		case DIO_PORTC:
			pu8Reg=PORTC_DIR_REG;
			break;
		case DIO_PORTD:
			pu8Reg=PORTD_DIR_REG;
			break;
		default:
			break;
	}
	switch(dir){
		case DIO_INPUT:
			CLEAR_BIT(*pu8Reg,pin);
			break;
		case DIO_OUTPUT:
			SET_BIT(*pu8Reg,pin);
			break;
		default:
			break;
	}
}
void DioChannelWrite(Dio_PinEnum_t port,Dio_PinEnum_t pin,Dio_PinStateEnum_t state){
	volatile uint8 *pu8Reg=NULL_PTR;
	switch(port){
		case DIO_PORTA:
			pu8Reg=PORTA_OUTPUT_REG;
			break;
		case DIO_PORTB:
			pu8Reg=PORTB_OUTPUT_REG;
			break;
		case DIO_PORTC:
			pu8Reg=PORTC_OUTPUT_REG;
			break;
		case DIO_PORTD:
			pu8Reg=PORTD_OUTPUT_REG;
			break;
		default:
			break;
	}
	switch(pin){
		case DIO_PIN0:
			switch(state){
				case DIO_HIGH:
					SET_BIT(*pu8Reg,DIO_PIN0);
					break;
				case DIO_LOW:
					CLEAR_BIT(*pu8Reg,DIO_PIN0);
					break;
				}
			break;
		case DIO_PIN1:
			switch(state){
				case DIO_HIGH:
					SET_BIT(*pu8Reg,DIO_PIN1);
					break;
				case DIO_LOW:
					CLEAR_BIT(*pu8Reg,DIO_PIN1);
					break;
			}
			break;
		case DIO_PIN2:
			switch(state){
				case DIO_HIGH:
					SET_BIT(*pu8Reg,DIO_PIN2);
					break;
				case DIO_LOW:
					CLEAR_BIT(*pu8Reg,DIO_PIN2);
					break;
			}
			break;
		case DIO_PIN3:
			switch(state){
				case DIO_HIGH:
					SET_BIT(*pu8Reg,DIO_PIN3);
					break;
				case DIO_LOW:
					CLEAR_BIT(*pu8Reg,DIO_PIN3);
					break;
			}
			break;
		case DIO_PIN4:
			switch(state){
				case DIO_HIGH:
					SET_BIT(*pu8Reg,DIO_PIN4);
					break;
				case DIO_LOW:
					CLEAR_BIT(*pu8Reg,DIO_PIN4);
					break;
			}
			break;
		case DIO_PIN5:
			switch(state){
				case DIO_HIGH:
					SET_BIT(*pu8Reg,DIO_PIN5);
					break;
				case DIO_LOW:
					CLEAR_BIT(*pu8Reg,DIO_PIN5);
					break;
			}
			break;
		case DIO_PIN6:
			switch(state){
				case DIO_HIGH:
					SET_BIT(*pu8Reg,DIO_PIN6);
					break;
				case DIO_LOW:
					CLEAR_BIT(*pu8Reg,DIO_PIN6);
					break;
			}
			break;
		case DIO_PIN7:
			switch(state){
				case DIO_HIGH:
					SET_BIT(*pu8Reg,DIO_PIN7);
					break;
				case DIO_LOW:
					CLEAR_BIT(*pu8Reg,DIO_PIN7);
					break;
			}
			break;
		default:
			break;
	}
	
}
void DioChannelToggle(Dio_PortEnum_t port,Dio_PinEnum_t pin){
	volatile uint8 *pu8Reg=NULL_PTR;
	switch(port){
		case DIO_PORTA:
			pu8Reg=PORTA_OUTPUT_REG;
			break;
		case DIO_PORTB:
			pu8Reg=PORTB_OUTPUT_REG;
			break;
		case DIO_PORTC:
			pu8Reg=PORTC_OUTPUT_REG;
			break;
		case DIO_PORTD:
			pu8Reg=PORTD_OUTPUT_REG;
			break;
		default:
			break;
	}
	switch(pin){
		case DIO_PIN0:
			TOGGLE_BIT(*pu8Reg,DIO_PIN0);
			break;
		case DIO_PIN1:
			TOGGLE_BIT(*pu8Reg,DIO_PIN1);
			break;
		case DIO_PIN2:
			TOGGLE_BIT(*pu8Reg,DIO_PIN2);
			break;
		case DIO_PIN3:
			TOGGLE_BIT(*pu8Reg,DIO_PIN3);
			break;
		case DIO_PIN4:
			TOGGLE_BIT(*pu8Reg,DIO_PIN4);
			break;
		case DIO_PIN5:
			TOGGLE_BIT(*pu8Reg,DIO_PIN5);
			break;
		case DIO_PIN6:
			TOGGLE_BIT(*pu8Reg,DIO_PIN6);
			break;
		case DIO_PIN7:
			TOGGLE_BIT(*pu8Reg,DIO_PIN7);
			break;
		default:
			break;
	}
	
}
Dio_PinStateEnum_t DioChannelRead(Dio_PortEnum_t port,Dio_PinEnum_t pin){
	volatile uint8 *pu8Reg=NULL_PTR;
	switch(port){
		case DIO_PORTA:
			pu8Reg=PORTA_INPUT_REG;
			break;
		case DIO_PORTB:
			pu8Reg=PORTB_INPUT_REG;
			break;
		case DIO_PORTC:
			pu8Reg=PORTC_INPUT_REG;
			break;
		case DIO_PORTD:
			pu8Reg=PORTD_INPUT_REG;
			break;
		default:
			break;
	}
	switch(pin){
		case DIO_PIN0:
			return READ_BIT(*pu8Reg,DIO_PIN0);
			break;
		case DIO_PIN1:
			return READ_BIT(*pu8Reg,DIO_PIN1);
			break;
		case DIO_PIN2:
			return READ_BIT(*pu8Reg,DIO_PIN2);
			break;
		case DIO_PIN3:
			return READ_BIT(*pu8Reg,DIO_PIN3);
			break;
		case DIO_PIN4:
			return READ_BIT(*pu8Reg,DIO_PIN4);
			break;
		case DIO_PIN5:
			return READ_BIT(*pu8Reg,DIO_PIN5);
			break;
		case DIO_PIN6:
			return READ_BIT(*pu8Reg,DIO_PIN6);
			break;
		case DIO_PIN7:
			return READ_BIT(*pu8Reg,DIO_PIN7);
			break;
		default:
			return DIO_LOW;
			break;
	}
}