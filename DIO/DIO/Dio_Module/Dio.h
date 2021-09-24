#ifndef DIO_H_
#define DIO_H_
typedef enum
{
	DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}Dio_PortEnum_t;

typedef enum
{
	DIO_PORT0,
	DIO_PORT1,
	DIO_PORT2,
	DIO_PORT3,
	DIO_PORT4,
	DIO_PORT5,
	DIO_PORT6,
	DIO_PORT7,
}Dio_PinEnum_t;

typedef enum
{
	DIO_LOW,
	DIO_HIGH,
}Dio_PinStateEnum_t;

typedef enum
{
	DIO_INPUT,
	DIO_OUTPUT
}Dio_PinDirEnum_t;

void DioDirectionSet(Dio_PortEnum_t port,Dio_PinEnum_t pin,Dio_PinDirEnum_t dir);
void DioChannelWrite(Dio_PinEnum_t port,Dio_PinEnum_t pin,Dio_PinStateEnum_t state);
void DioChannelToggle(Dio_PortEnum_t port,Dio_PinDirEnum_t pin);
Dio_PinStateEnum_t DioChannelRead(Dio_PortEnum_t port,Dio_PinEnum_t pin);
#endif