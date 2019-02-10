///////////////////////////////////////
// stm32f3_UART code file            //
// Author: Ravi Thakur               //
// Version 1.0                       //
//                                   //
///////////////////////////////////////

#include "stm32f30x.h"
#include "stm32f3_UART.h"
#include "stdio.h"

void UART_Init(void);
void UART_Shutdown(void);
void USART2_IRQHandler(void);
int fputc(int ch, FILE *f);


