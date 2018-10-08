#include "bsp_led.h"

unsigned char Led_Init(unsigned char ID)
{
	if(ID == 0)
	{
		P2CON |= 0X02;
		P2PH  &= ~0X02;
	}
	else if(ID == 1)
	{
		P2CON |= 0X40;
		P2PH  &= ~0X40;
	}
	else if(ID == 2)
	{
		P2CON |= 0X80;
		P2PH  &= ~0X80;
	}
	else
	{
		return 0;
	}
	return 1;
}

unsigned char Led_App_Init(LED_PARA_T *p)
{
	unsigned char Led_Init(unsigned char ID);
	return Led_Init(p->ID);
}




