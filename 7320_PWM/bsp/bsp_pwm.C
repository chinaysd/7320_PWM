#include "bsp_pwm.h"


unsigned char Pwm1_Open(unsigned char status)
{
	static unsigned char num;
	for(num = 0;num < status;num ++)
	{
		PWMCON  |= 0x1A;		//PWM输出到IO，PWM时钟为Fsys/4
	  PWMPRD  = PWM_CYCLE;		//PWM周期=(59+1)*(1/6us)=10us	;
	  PWMCFG  |= 0x02;		//PWM输出不反向,输出至P25/P26/P27
		PWMDTYA &= 0x00;
		PWMDTY1 = 5;       //PWM0的Duty = 15/60 =1/4
		PWMCON  |= 0x80;     //开启PWM
	}
	if(num != status)
	{
		return PWM1_ERROR;
	}
	else
	{
		return PWM1_SUCCESS;
	}
}


unsigned char Pwm1_Close(unsigned char status)
{
	static unsigned char num;
	for(num = 0;num < status;num ++)
	{
		PWMCON  |= 0x1A;		 //PWM输出到IO，PWM时钟为Fsys/4
	  PWMPRD  = PWM_CYCLE; //PWM周期=(59+1)*(1/6us)=10us	;
	  PWMCFG  &= ~0x02;		 //PWM输出不反向,输出至P25/P26/P27
		PWMDTYA &= 0;
		PWMDTY1 &= 0;        //PWM0的Duty = 15/60 =1/4
		PWMCON  |= 0x80;     //开启PWM
		
	}
	if(num != status)
	{
		return PWM1_ERROR;
	}
	else
	{
		return PWM1_SUCCESS;
	}
}

unsigned char Pwm2_Open(unsigned char status)
{
	static unsigned char num;
	for(num = 0; num < status; num ++)
	{
		PWMCON  |= 0x2A;		//PWM输出到IO，PWM时钟为Fsys/4
	  PWMPRD  = PWM_CYCLE;		//PWM周期=(59+1)*(1/6us)=10us	;
	  PWMCFG  |= 0x04;		//PWM输出不反向,输出至P25/P26/P27
		PWMDTYA &= 0x00;
		PWMDTY2 |= 5;       //PWM0的Duty = 15/60 =1/4
		PWMCON  |= 0x80;     //开启PWM
	}
	if(num != status)
	{
		return PWM2_ERROR;
	}
	else
	{
		return PWM2_SUCCESS;
	}
}

unsigned char Pwm2_Close(unsigned char status)
{
	unsigned char num;
	for(num = 0;num < status;num ++)
	{
		PWMCON  |= 0x2A;		//PWM输出到IO，PWM时钟为Fsys/4
	  PWMPRD  = PWM_CYCLE;		//PWM周期=(59+1)*(1/6us)=10us	;
	  PWMCFG  &= ~0x04;		//PWM输出不反向,输出至P25/P26/P27
		PWMDTYA &= 0;
		PWMDTY2 &= 0;       //PWM0的Duty = 15/60 =1/4
		PWMCON  |= 0x80;    //开启PWM
	}
	if(num != status)
	{
		return PWM2_ERROR;
	}
	else
	{
		return PWM2_SUCCESS;
	}
}






