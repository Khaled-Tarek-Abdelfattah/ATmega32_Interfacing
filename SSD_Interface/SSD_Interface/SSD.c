#include "SSD.h"
#include "Dio.h"
#include "util/delay.h"

const uint8 numSet[10] = {ZERO,ONE,TOW,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
	
void Ssd_init(){

	DioDirectionSet(SSD_ControlDir_Reg,SSD1_EN,DIO_OUTPUT);
	DioDirectionSet(SSD_ControlDir_Reg,SSD2_EN,DIO_OUTPUT);
	
	*SSD_DataDir_Reg |= 0xf0;
}

void Ssd_StateSet(SSD_Enable_t enable,num_t num){
	switch(enable){
		case SSD1_EN :
			DioChannelWrite(SSD_ControlEnable_Reg,SSD1_EN,DIO_HIGH);
			DioChannelWrite(SSD_ControlEnable_Reg,SSD2_EN,DIO_LOW);
			break;
		case SSD2_EN :
			DioChannelWrite(SSD_ControlEnable_Reg,SSD1_EN,DIO_LOW);
			DioChannelWrite(SSD_ControlEnable_Reg,SSD2_EN,DIO_HIGH);
			break;
		default:
			DioChannelWrite(SSD_ControlEnable_Reg,SSD1_EN,DIO_LOW);
			DioChannelWrite(SSD_ControlEnable_Reg,SSD2_EN,DIO_LOW);
			break;
	}
	*SSD_DataValue_Reg &= 0x0f;
	*SSD_DataValue_Reg |= num;
}

void Ssd_Write(uint16 num){
	Ssd_StateSet(SSD1_EN,numSet[(num%100)/10]);
	_delay_ms(10);
	Ssd_StateSet(SSD2_EN,numSet[num%10]);
	_delay_ms(10);
}
