#include "system.h"

LED_PARA_T Led_Para_t[LED_NUM];
TIMEOUT_PARA TimeOut_Para[2];
static unsigned char cnt;
void System_Init(void)
{
	static unsigned char i;
	for(i = 0;i < LED_NUM;i++)
	{
		Led_Para_t[i].ID = i;
		Led_App_Init(&Led_Para_t[i]);
	}
	TimeOutDet_Init();
	Timer_Init();
}

void System_Handle(void)
{
	
	#if 1
	if(TimeOutDet_Check(&TimeOut_Para[0]))
	{
		TimeOut_Record(&TimeOut_Para[0],OnLine_Time);
		++ cnt;
		if(cnt & 0x01)
		{
			Pwm1_Open(PWM1_OPEN);
		  Pwm2_Close(PWM2_CLOSE);
			
		}
		else
		{
			Pwm1_Close(PWM1_CLOSE);
			Pwm2_Open(PWM2_OPEN);
			
		}
	}
	#endif
}


