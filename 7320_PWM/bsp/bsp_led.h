#ifndef _BSP_LED_H_
#define _BSP_LED_H_

#include "sc92f732x_c.h"

#define  LED_NUM         3

#define LED_ENABLE     1
#define LED_DISABLE    0

#if LED_ENABLE

#define LED1_PORT      P2
#define LED1_PIN       P21
#define LED1_SET(X)    (LED1_PIN = X)

#define LED2_PORT      P2
#define LED2_PIN       P26
#define LED2_SET(X)    (LED2_PIN = X)

#define LED3_PORT      P2
#define LED3_PIN       P27
#define LED3_SET(X)    (LED3_PIN = X)

#endif

typedef struct
{
	unsigned char ID;
}
LED_PARA_T;


unsigned char Led_App_Init(LED_PARA_T *p);

#endif