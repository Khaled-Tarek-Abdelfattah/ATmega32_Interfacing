/*
 * SWITCH_Interface.h
 *
 * Created: 9/21/2021 4:14:44 PM
 *  Author: Khaled Tarek
 */ 


#ifndef SWITCH_INTERFACE_H_
#define SWITCH_INTERFACE_H_


#include "Dio.h"
#include "util/delay.h"

typedef enum{
	SWITCH_0,
	SWITCH_1,
	SWITCH_2,
}Switch_t;
typedef enum{
	SWITCH_REALEASED=0,
	SWITCH_PUSHED=1
}Switch_State_t;

void Switch_Init(Switch_t switch_Button);

Switch_State_t Read_Switch(Switch_t switch_Button);



#endif /* SWITCH_INTERFACE_H_ */