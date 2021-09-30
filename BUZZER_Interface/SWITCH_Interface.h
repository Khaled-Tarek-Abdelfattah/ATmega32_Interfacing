/*
 * SWITCH_Interface.h
 *
 * Created: 9/21/2021 4:14:44 PM
 *  Author: hp
 */ 


#ifndef SWITCH_INTERFACE_H_
#define SWITCH_INTERFACE_H_


#include "Dio.h"


typedef enum{
	SWITCH_0,
	SWITCH_1,
	SWITCH_2,
}Switch_t;
typedef enum{
	SWITCH_REALEASED,
	SWITCH_PUSHED,
}Switch_State_t;

void Switch_Init(Switch_t switch_Button);

Switch_State_t Read_Switch(Switch_t switch_Button);



#endif /* SWITCH_INTERFACE_H_ */