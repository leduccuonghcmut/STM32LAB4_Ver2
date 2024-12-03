//#include "fsm_auto.h"
//#include "global.h"
//#include "traffic_2_lane.h"
//
//// Trạng thái làn giao thông
//int status_lane1 = INIT_1;
//int status_lane2 = INIT_2;
//
//#define RED_TIME 5     // Thời gian đèn đỏ (giây)
//#define GREEN_TIME 3   // Thời gian đèn xanh (giây)
//#define YELLOW_TIME 2  // Thời gian đèn vàng (giây)
//
//// FSM cho làn 1
//void fsm_auto_run_lane1() {
//    switch (status_lane1) {
//        case INIT_1:
//            status_lane1 = RED_1;
//            counter_lane1 = RED_TIME * 50; // 5 giây * 50 tick (10ms mỗi tick)
//            red1_time = RED_TIME;
//            break;
//
//        case RED_1:
//            red_1(); // Bật đèn đỏ
//            led_buffer_lane1[0] = red1_time / 10; // Hàng chục
//            led_buffer_lane1[1] = red1_time % 10; // Hàng đơn vị
//
//            counter_lane1--;
//            if (counter_lane1 % 50 == 0) {
//                red1_time--;
//            }
//
//            if (counter_lane1 <= 0) {
//                status_lane1 = GREEN_1;
//                counter_lane1 = GREEN_TIME * 50; // 3 giây
//                green1_time = GREEN_TIME;
//            }
//            break;
//
//        case GREEN_1:
//            green_1(); // Bật đèn xanh
//            led_buffer_lane1[0] = green1_time / 10;
//            led_buffer_lane1[1] = green1_time % 10;
//
//            counter_lane1--;
//            if (counter_lane1 % 50 == 0) {
//                green1_time--;
//            }
//
//            if (counter_lane1 <= 0) {
//                status_lane1 = YELLOW_1;
//                counter_lane1 = YELLOW_TIME * 50; // 2 giây
//                yellow1_time = YELLOW_TIME;
//            }
//            break;
//
//        case YELLOW_1:
//            yellow_1(); // Bật đèn vàng
//            led_buffer_lane1[0] = yellow1_time / 10;
//            led_buffer_lane1[1] = yellow1_time % 10;
//
//            counter_lane1--;
//            if (counter_lane1 % 50 == 0) {
//                yellow1_time--;
//            }
//
//            if (counter_lane1 <= 0) {
//                status_lane1 = RED_1;
//                counter_lane1 = RED_TIME * 50;
//                red1_time = RED_TIME;
//            }
//            break;
//
//        default:
//            break;
//    }
//}
//
//// FSM cho làn 2
//void fsm_auto_run_lane2() {
//    switch (status_lane2) {
//        case INIT_2:
//            status_lane2 = GREEN_2;
//            counter_lane2 = GREEN_TIME * 50; // 3 giây
//            green2_time = GREEN_TIME;
//            break;
//
//        case GREEN_2:
//            green_2(); // Bật đèn xanh
//            led_buffer_lane2[0] = green2_time / 10;
//            led_buffer_lane2[1] = green2_time % 10;
//
//            counter_lane2--;
//            if (counter_lane2 % 50 == 0) {
//                green2_time--;
//            }
//
//            if (counter_lane2 <= 0) {
//                status_lane2 = YELLOW_2;
//                counter_lane2 = YELLOW_TIME * 50;
//                yellow2_time = YELLOW_TIME;
//            }
//            break;
//
//        case YELLOW_2:
//            yellow_2(); // Bật đèn vàng
//            led_buffer_lane2[0] = yellow2_time / 10;
//            led_buffer_lane2[1] = yellow2_time % 10;
//
//            counter_lane2--;
//            if (counter_lane2 % 50 == 0) {
//                yellow2_time--;
//            }
//
//            if (counter_lane2 <= 0) {
//                status_lane2 = RED_2;
//                counter_lane2 = RED_TIME * 50;
//                red2_time = RED_TIME;
//            }
//            break;
//
//        case RED_2:
//            red_2(); // Bật đèn đỏ
//            led_buffer_lane2[0] = red2_time / 10;
//            led_buffer_lane2[1] = red2_time % 10;
//
//            counter_lane2--;
//            if (counter_lane2 % 50 == 0) {
//                red2_time--;
//            }
//
//            if (counter_lane2 <= 0) {
//                status_lane2 = GREEN_2;
//                counter_lane2 = GREEN_TIME * 50;
//                green2_time = GREEN_TIME;
//            }
//            break;
//
//        default:
//            break;
//    }
//}
//
//
#include "fsm_auto.h"
#include "traffic_2_lane.h"
int status_lane1 = INIT_1;
int status_lane2 = INIT_2;

void fsm_auto_run_lane1(){
	switch (status_lane1) {
		case INIT_1:
			status_lane1 = RED_1;
			value1_buffer[0] = red1TimeMAX*1000;
			setTimer(1, value1_buffer[0]);
			setTimer(3, 1000);
			break;
		case RED_1:
			red_1();
			led_buffer_lane1[0] = red1_time/10;
			led_buffer_lane1[1] = red1_time%10;
			if(timer_flag[3] == 1){
				red1_time--;
				if(red1_time==0){
					red1_time = red1TimeMAX;
				}
				setTimer(3, 1000);
			}
			if(timer_flag[1] == 1){
				status_lane1 = GREEN_1;
				value1_buffer[1] = green1TimeMAX*1000;
				setTimer(1, value1_buffer[1]);
				setTimer(3, 1000);
			}
			break;
		case GREEN_1:
			green_1();
			led_buffer_lane1[0] = green1_time/10;
			led_buffer_lane1[1] = green1_time%10;
			if(timer_flag[3] == 1){
				green1_time--;
				if(green1_time == 0){
					green1_time = green1TimeMAX;
				}
				setTimer(3, 1000);
			}
			if(timer_flag[1] == 1){
				status_lane1 = YELLOW_1;
				value1_buffer[2] = yellow1TimeMAX*1000;
				setTimer(1, value1_buffer[2]);
				setTimer(3, 1000);
			}
			break;
		case YELLOW_1:
			yellow_1();
			led_buffer_lane1[0] = yellow1_time/10;
			led_buffer_lane1[1] = yellow1_time%10;
			if(timer_flag[3] == 1){
				yellow1_time--;
				if(yellow1_time==0){
					yellow1_time = yellow1TimeMAX;
				}
				setTimer(3, 1000);
			}
			if(timer_flag[1] == 1){
				status_lane1 = RED_1;
				value1_buffer[0] = red1TimeMAX*1000;
				setTimer(1, value1_buffer[0]);
				setTimer(3, 1000);
			}
			break;
		default:
			break;
	}
}

void fsm_auto_run_lane2(){
	switch (status_lane2) {
		case INIT_2:
			status_lane2 = GREEN_2;
			value2_buffer[0] = green2TimeMAX*1000;
			setTimer(2, value2_buffer[0]);
			setTimer(5, 1000);
			break;
		case GREEN_2:
			green_2();
			led_buffer_lane2[0] = green2_time/10;
			led_buffer_lane2[1] = green2_time%10;
			if(timer_flag[5] == 1){
				green2_time--;
				if(green2_time == 0){
					green2_time=green2TimeMAX;
				}
				setTimer(5, 1000);
			}
			if(timer_flag[2] == 1){
				status_lane2 = YELLOW_2;
				value2_buffer[1]=yellow2TimeMAX*1000;
				setTimer(2, value2_buffer[1]);
				setTimer(5, 1000);
			}
			break;
		case YELLOW_2:
			yellow_2();
			led_buffer_lane2[0] = yellow2_time/10;
			led_buffer_lane2[1] = yellow2_time%10;
			if(timer_flag[5] == 1){
				yellow2_time--;
				if(yellow2_time == 0){
					yellow2_time=yellow2TimeMAX;
				}
				setTimer(5, 1000);
			}
			if(timer_flag[2] == 1){
				status_lane2 = RED_2;
				value2_buffer[2] = red2TimeMAX*1000;
				setTimer(2, value2_buffer[2]);
				setTimer(5, 1000);
			}
			break;
		case RED_2:
			red_2();
			led_buffer_lane2[0] = red2_time/10;
			led_buffer_lane2[1] = red2_time%10;
			if(timer_flag[5] == 1){
				red2_time--;
				if(red2_time == 0){
					red2_time=red1TimeMAX;
				}
				setTimer(5, 1000);
			}
			if(timer_flag[2] == 1){
				status_lane2 = GREEN_2;
				value2_buffer[0] = green2TimeMAX*1000;
				setTimer(2, value2_buffer[0]);
				setTimer(5, 1000);
			}
			break;
		default:
			break;
	}
}

