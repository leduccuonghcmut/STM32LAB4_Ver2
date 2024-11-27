#include "main.h"
#include "software_timer.h"
#include "global.h"
#include "display7SEG.h"
#include "traffic_2_lane.h"

#ifndef INC_FSM_AUTO_H_
#define INC_FSM_AUTO_H_


extern int status_lane1;
extern int status_lane2;

void fsm_auto_run_lane1();
void fsm_auto_run_lane2();

#define INIT_1 10
#define RED_1 11
#define GREEN_1 12
#define YELLOW_1 13

#define INIT_2 14
#define RED_2 15
#define GREEN_2 16
#define YELLOW_2 17

#endif /* INC_FSM_AUTO_H_ */
