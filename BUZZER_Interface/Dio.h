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
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7,
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
void DioChannelToggle(Dio_PortEnum_t port,Dio_PinEnum_t pin);
Dio_PinStateEnum_t DioChannelRead(Dio_PortEnum_t port,Dio_PinEnum_t pin);
#endif