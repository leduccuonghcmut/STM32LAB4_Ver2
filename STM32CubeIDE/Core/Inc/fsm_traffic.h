#include "main.h"
#include "global.h"
#include "software_timer.h"
//#include "fsm_auto.h"


#ifndef INC_FSM_TRAFFIC_H_
#define INC_FSM_TRAFFIC_H_

extern int status_traffic_lane1;
extern int status_traffic_lane2;

#define display_traffic_lane1 30
#define modify_red1 31
#define modify_green1 32
#define modify_yellow1 33

#define display_traffic_lane2 35
#define modify_red2 45
#define modify_green2 46
#define modify_yellow2 47

void fsm_traffic_lane1_run();
void fsm_traffic_lane2_run();

#endif /* INC_FSM_TRAFFIC_H_ */
