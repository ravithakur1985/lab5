///////////////////////////////////////
// stm32f3_Exec header file          //
// Author: Ravi Thakur               //
// Version 1.0                       //
//                                   //
///////////////////////////////////////


#ifndef __stm32f3_EXEC_H__
#define __stm32f3_EXEC_H__
#include "stm32f30x.h"

//declaring prototypes
void Exec_Init(void);
void Exec_Start(void);
void Exec_SetTask(uint32_t task);
void Exec_ClearTask(void);

void extern Button_Task(void);
void extern TIM2_Task(void);

//task macro definitions
#define EXEC_TASK_NOP    0x00000000
#define EXEC_TASK_BUTTON 0x00000001
#define EXEC_TASK_TIM2   0x00000002

#endif
