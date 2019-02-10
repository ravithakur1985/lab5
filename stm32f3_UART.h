///////////////////////////////////////
// stm32f3_UART header file          //
// Author: Ravi Thakur               //
// Version 1.0                       //
//                                   //
///////////////////////////////////////

#ifndef __stm32f3_UART_H__
#define __stm32f3_UART_H__

#include "stdio.h"

void UART_Init(void);
void UART_Shutdown(void);
void USART2_IRQHandler(void);
int fputc(int ch, FILE *f);

#endif

