#include "fsm_setting.h"
int StatusLED1 = CountDownLED1;
int StatusLED2 = CountDownLED2;

void FSMDisplayLED1(){
	switch(StatusLED1){
		case CountDownLED1:
			if(timer_flag[4] == 1)
			{
				update7SEG(indexLEDmot++);
				if(indexLEDmot == 2) indexLEDmot = 0;
				setTimer(4, 500);
			}
			break;
		case DisplayLED1Mode2:
			led_buffer_lane1[0] = 0;
			led_buffer_lane1[1] = 2;
			if(timer_flag[4]==1)
			{
				update7SEG(indexLEDmot++);
				if(indexLEDmot == 2) indexLEDmot = 0;
				setTimer(4, 500);
			}
			break;
		case DisplayLED1Mode3:
			led_buffer_lane1[0] = 0;
			led_buffer_lane1[1] = 3;
			if(timer_flag[4]==1){
				update7SEG(indexLEDmot++);
				if(indexLEDmot == 2) indexLEDmot = 0;
				setTimer(4, 500);
			}
			break;
		case DisplayLED1Mode4:
			led_buffer_lane1[0] = 0;
			led_buffer_lane1[1] = 4;
			if(timer_flag[4]==1){
				update7SEG(indexLEDmot++);
				if(indexLEDmot == 2) indexLEDmot = 0;
				setTimer(4, 500);
			}
			break;
		default:
			break;
	}
}

void FSMDisplayLED2(){
	switch(StatusLED2) {
		case CountDownLED2:
			if(timer_flag[6] == 1){
				update7SEG_lane2(indexLEDhai++);
				if(indexLEDhai == 2) indexLEDhai = 0;
				setTimer(6, 500);
			}
			break;
		case TimerValue:
			if(timer_flag[6] == 1){
				update7SEG_lane2(indexLEDhai++);
				if(indexLEDhai == 2) indexLEDhai = 0;
				setTimer(6, 500);
			}
			break;
		default:
			break;
	}
}

void FSM_Display_2LED(){
	FSMDisplayLED1();
	FSMDisplayLED2();
}




