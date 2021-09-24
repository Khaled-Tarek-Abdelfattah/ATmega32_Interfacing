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
	
}
void DioChannelToggle(Dio_PortEnum_t port,Dio_PinDirEnum_t pin){
	
}
Dio_PinStateEnum_t DioChannelRead(Dio_PortEnum_t port,Dio_PinEnum_t pin){
	
}