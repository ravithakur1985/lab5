///////////////////////////////////////
// stm32f3_EXEC code                 //
// Author: Ravi Thakur               //
// Version 1.0                       //
//                                   //
///////////////////////////////////////

#include "stm32f3_Exec.h"
#include "stm32f3_LEDS.h"
#include "stm32f3_Button.h"
#include "stm32f3_GeneralTImer2.h"

//defining the file scope variable
static uint32_t tasks_to_execute;

//defining the functions
void Exec_Init(void) {
	tasks_to_execute = EXEC_TASK_NOP;
	return;
}

void Exec_SetTask(uint32_t task){
	tasks_to_execute = task;	
	return;
}

void Exec_ClearTask(void){
	tasks_to_execute = EXEC_TASK_NOP;
	return;
}

void Exec_Start(void) {
	while (1){
		switch(tasks_to_execute){
				case 1 :
					Exec_ClearTask();
					Button_Task();;
					break;
				case 2 :
          Exec_ClearTask();
          TIM2_Task();				
					break;				
				default:
					__nop();
				  break;
			}
		
	}	
}

