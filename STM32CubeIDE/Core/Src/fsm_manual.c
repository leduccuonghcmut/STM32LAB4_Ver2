#include "fsm_manual.h"
#include "global.h"
#include "button.h"
#include "software_timer.h"
#include "fsm_setting.h"
#include "fsm_auto.h"
#include "traffic_2_lane.h"
#include "fsm_traffic.h"


void fsm_manual_run(){
	switch(STATUS_MODE){
		case INIT:
			STATUS_MODE = MODE_1;
			break;

		case MODE_1:
			status_traffic_lane1 = display_traffic_lane1;
			status_traffic_lane2 = display_traffic_lane2;
			StatusLED1 = CountDownLED1;
			StatusLED2 = CountDownLED2;

			if(isButton1_Pressed() == 1){
				STATUS_MODE = MODE_2;
			}
			break;
		case MODE_2:
			status_traffic_lane1 = modify_red1;
			status_traffic_lane2 = modify_red2;
			StatusLED1 = DisplayLED1Mode2;
			StatusLED2 = TimerValue;

			if(isButton2_Pressed() == 1){
				red1TimeMAX++;
				red2TimeMAX++;
				green1TimeMAX++;
				green2TimeMAX++;
//				if(red1TimeMAX > 10 && green1TimeMAX > 10){
//					red1TimeMAX = 5;
//					red2TimeMAX = 5;
//					green1TimeMAX = 3;
//					green2TimeMAX = 3;
//				}
			}
			//update buffer
			led_buffer_lane2[0] = red2TimeMAX/10;
			led_buffer_lane2[1] = red2TimeMAX%10;

			if(isButton3_Pressed() == 1){
				red1_time = red1TimeMAX;
				red2_time = red2TimeMAX;
				green1_time = green1TimeMAX;
				green2_time = green2TimeMAX;
				if(red1_time > 99 && red2_time > 99){
					red1_time = 5;
					red2_time = 5;
					green1_time = 3;
					green2_time = 3;
				}
			}
			if(isButton1_Pressed() == 1){
				STATUS_MODE = MODE_3;
			}
			break;
		case MODE_3:
			status_traffic_lane1 = modify_yellow1;
			status_traffic_lane2 = modify_yellow2;
			StatusLED1 = DisplayLED1Mode3;
			StatusLED2 = TimerValue;

			if(isButton2_Pressed() == 1){
				yellow1TimeMAX++;
				yellow2TimeMAX++;
				red1TimeMAX++;
				red2TimeMAX++;
				if(yellow1TimeMAX > 99 && red1TimeMAX > 99){
					yellow1TimeMAX = 2;
					yellow2TimeMAX = 2;
					red1TimeMAX = 5;
					red2TimeMAX = 5;
				}
			}
			led_buffer_lane2[0] = yellow2TimeMAX/10;
			led_buffer_lane2[1] = yellow2TimeMAX%10;

			if(isButton3_Pressed() == 1){
				yellow1_time = yellow1TimeMAX;
				yellow2_time = yellow2TimeMAX;
				red1_time = red1TimeMAX;
				red2_time = red2TimeMAX;
				if(yellow1_time > 99 && yellow2_time > 99){
					yellow1_time = 2;
					yellow1_time = 2;
					red1_time = 5;
					red2_time = 5;
				}
			}
			if(isButton1_Pressed() == 1){
				STATUS_MODE = MODE_4;
			}
			break;
		case MODE_4:
			status_traffic_lane1 = modify_green1;
			status_traffic_lane2 = modify_green2;
			StatusLED1 = DisplayLED1Mode4;
			StatusLED2 = TimerValue;

			if(isButton2_Pressed() == 1){
				green1TimeMAX++;
				green2TimeMAX++;
				red1TimeMAX++;
				red2TimeMAX++;
			}

			led_buffer_lane2[0] = green2TimeMAX/10;
			led_buffer_lane2[1] = green2TimeMAX%10;

			if(isButton3_Pressed() == 1){
				green1_time = green1TimeMAX;
				green2_time = green2TimeMAX;
				red1_time = red1TimeMAX;
				red2_time = red2TimeMAX;
				if(green1_time > 99 && green2_time > 99){
					green1_time = 3;
					green2_time = 3;
					red1_time = 5;
					red2_time = 5;
				}
			}
			if(isButton1_Pressed() == 1 ){
				status_lane1 = INIT_1;
				status_lane2 = INIT_2;
				STATUS_MODE = INIT;
			}
			break;
		}
}






















//void fsm_manual_run(){
//	switch(STATUS_MODE){
//		case INIT:
//			STATUS_MODE = MODE_1;
//			break;
//
//		case MODE_1:
//			status_traffic_lane1 = display_traffic_lane1;
//			status_traffic_lane2 = display_traffic_lane2;
//			StatusLED1 = CountDownLED1;
//			StatusLED2 = CountDownLED2;
//
//			if(subKeyProcess(1)){
//				STATUS_MODE = MODE_2;
//			}
//			break;
//		case MODE_2:
//			status_traffic_lane1 = modify_red1;
//			status_traffic_lane2 = modify_red2;
//			StatusLED1 = DisplayLED1Mode2;
//			StatusLED2 = TimerValue;
//
//			if(subKeyProcess(2)){
//				red1TimeMAX++;
//				red2TimeMAX++;
//			}
//			//update buffer
//			led_buffer_lane2[0] = red2TimeMAX/10;
//			led_buffer_lane2[1] = red2TimeMAX%10;
//
//			if(subKeyProcess(3)){
//				red1_time = red1TimeMAX;
//				red2_time = red2TimeMAX;
//			}
//			if(subKeyProcess(1)){
//				STATUS_MODE = MODE_3;
//			}
//			break;
//		case MODE_3:
//			status_traffic_lane1 = modify_yellow1;
//			status_traffic_lane2 = modify_yellow2;
//			StatusLED1 = DisplayLED1Mode3;
//			StatusLED2 = TimerValue;
//
//			if(subKeyProcess(2)){
//				yellow1TimeMAX++;
//				yellow2TimeMAX++;
//			}
//			led_buffer_lane2[0] = yellow2TimeMAX/10;
//			led_buffer_lane2[1] = yellow2TimeMAX%10;
//
//			if(subKeyProcess(3)){
//				yellow1_time = yellow1TimeMAX;
//				yellow2_time = yellow2TimeMAX;
//			}
//			if(subKeyProcess(1)){
//				STATUS_MODE = MODE_4;
//			}
//			break;
//		case MODE_4:
//			status_traffic_lane1 = modify_green1;
//			status_traffic_lane2 = modify_green2;
//			StatusLED1 = DisplayLED1Mode4;
//			StatusLED2 = TimerValue;
//
//			if(subKeyProcess(2)){
//				green1TimeMAX++;
//				green2TimeMAX++;
//			}
//
//			led_buffer_lane2[0] = green2TimeMAX/10;
//			led_buffer_lane2[1] = green2TimeMAX%10;
//
//			if(subKeyProcess(3)){
//				green1_time = green1TimeMAX;
//				green2_time = green2TimeMAX;
//			}
//			if(subKeyProcess(1)){
//				status_lane1 = INIT_1;
//				status_lane2 = INIT_2;
//				STATUS_MODE = INIT;
//			}
//			break;
//		}
//}




