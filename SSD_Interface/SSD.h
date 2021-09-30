
#ifndef SSD_H_
#define SSD_H_

#include "ATMEGA32A_Config.h"
#include "Dio.h"

#define SSD_ControlDir_Reg		DIO_PORTB
#define SSD_ControlEnable_Reg	DIO_PORTB

#define SSD_DataDir_Reg		PORTA_DIR_REG
#define SSD_DataValue_Reg	PORTA_OUTPUT_REG

#define SSD_TYPE          (SSD_COMMON_CATHODE)

typedef enum
{
ZERO = 0x00U,		ONE = 0x10U,
TOW = 0x20U,		THREE = 0x30U,
FOUR = 0x40U,		FIVE = 0x50U,
SIX = 0x60U,		SEVEN = 0x70U,
EIGHT = 0x80U,		NINE = 0x90U,
}num_t;

typedef enum
{
SSD1_EN=DIO_PIN2,
SSD2_EN=DIO_PIN1
}SSD_Enable_t;


extern const uint8 numSet[10];

void Ssd_init();
void Ssd_StateSet(SSD_Enable_t enable,num_t num);
void Ssd_Write(uint16 num);

#endif /* SSD_H_ */