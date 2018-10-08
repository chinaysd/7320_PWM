#ifndef _SYSTEM_H_
#define _SYSTEM_H_

#include "sc92f732x_c.h"
#include "bsp_led.h"
#include "bsp_pwm.h"
#include "bsp_timer.h"
#include "TimeOut.h"


#define OnLine_Time    200


void System_Init(void);
void System_Handle(void);






#endif


