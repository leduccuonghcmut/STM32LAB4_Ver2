//#ifndef INC_SCHEDULER_H_
//#define INC_SCHEDULER_H_
//
//
//#include "main.h"
//#include "stdint.h"
//
//#define SCH_MAX_TASKS 			40  // so luong tasks max scheduler quan ly
//#define	NO_TASK_ID				0	// gia tri dac biet cua task_id, dung khi tasks ko hop le hoac khoi tao
//#define TICK					10
//typedef struct {
//	void (* pTask)(void); // con tro ham, tro toi ham can thuc thi
//	uint32_t Delay;
//	uint32_t Period;
//	uint8_t RunMe;
//	uint32_t TaskID;
//} sTask;
//sTask SCH_tasks_G[SCH_MAX_TASKS]; // chua tat ca tasks scheduler quan ly
//
//void SCH_Init(void);
//void SCH_Update(void);
//void SCH_Add_Task(void (* pFunction)(), uint32_t DELAY, uint32_t PERIOD);
//void SCH_Dispatch_Tasks(void);
////uint8_t SCH_Delete_Task(uint32_t taskID);
//void SCH_Delete_Task(uint32_t taskID);
////void SCH_Delete_Short_Task(void);
//
//
//
//
//
//
//
//
//
//
//
//
//
//#endif /* INC_SCHEDULER_H_ */
/*
 * scheduler.h
 *
 *  Created on: Nov 27, 2024
 *      Author: My Laptop
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>


typedef struct {
	void (* pTask)(void);
	uint32_t 	Delay;
	uint32_t 	Period;
	uint8_t 	Runme;

	uint32_t	TaskID;
}sTasks;


#define SCH_MAX_TASK 10
#define TICK 10
void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Add_Task(void(*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Delete_Task(const unsigned char TASK_INDEX);
void SCH_Delete_Short_Task(void);

#endif /* INC_SCHEDULER_H_ */

