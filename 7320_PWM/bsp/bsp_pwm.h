#ifndef _BSP_PWM_H_
#define _BSP_PWM_H_

#include "sc92f732x_c.h"

#define PWM1_OPEN     1
#define PWM1_CLOSE    1

#define PWM1_ERROR    1
#define PWM1_SUCCESS  0

#define PWM2_OPEN     1
#define PWM2_CLOSE    1

#define PWM2_ERROR    1
#define PWM2_SUCCESS  0

#define PWM_CYCLE     59


unsigned char Pwm1_Open(unsigned char status);
unsigned char Pwm1_Close(unsigned char status);

unsigned char Pwm2_Open(unsigned char status);
unsigned char Pwm2_Close(unsigned char status);


#endif

