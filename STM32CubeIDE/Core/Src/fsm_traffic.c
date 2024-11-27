#include "fsm_traffic.h"
#include "traffic_2_lane.h"
#include "fsm_auto.h"
#include "software_timer.h"


int status_traffic_lane1 = display_traffic_lane1;
int status_traffic_lane2 = display_traffic_lane2;

void fsm_traffic_lane1_run(){
	switch (status_traffic_lane1) {
		case display_traffic_lane1:
			fsm_auto_run_lane1();
			break;
		case modify_red1:
			off_greenyellow_lane1();
			if(timer_flag[8] == 1){
				HAL_GPIO_TogglePin(red1_GPIO_Port, red1_Pin);
				setTimer(8, 250);
			}
			break;
		case modify_yellow1:
			off_redgreen_lane1();
			if(timer_flag[8] == 1){
				HAL_GPIO_TogglePin(yellow1_GPIO_Port, yellow1_Pin);
				setTimer(8, 250);
			}
			break;
		case modify_green1:
			off_redyellow_lane1();
			if(timer_flag[8] == 1){
				HAL_GPIO_TogglePin(green1_GPIO_Port, green1_Pin);
				setTimer(8, 250);
			}
			break;
		default:
			break;
	}
}

void fsm_traffic_lane2_run(){
	switch(status_traffic_lane2){
		case display_traffic_lane2:
			fsm_auto_run_lane2();
			break;
		case modify_red2:
			off_greenyellow_lane2();
			if(timer_flag[7] == 1){
				HAL_GPIO_TogglePin(red2_GPIO_Port, red2_Pin);
				setTimer(7, 250);
			}
			break;
		case modify_green2:
			off_redyellow_lane2();
			if(timer_flag[7] == 1){
				HAL_GPIO_TogglePin(green2_GPIO_Port, green2_Pin);
				setTimer(7, 250);
			}
			break;
		case modify_yellow2:
			off_redgreen_lane2();
			if(timer_flag[7] == 1){
				HAL_GPIO_TogglePin(yellow2_GPIO_Port, yellow2_Pin);
				setTimer(7, 250);
			}
			break;
		default:
			break;
	}
}





