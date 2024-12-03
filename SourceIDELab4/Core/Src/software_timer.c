#include "software_timer.h"

int TICK = 10;

int timer_counter[10] = {0};
int timer_flag[10] = {0};


void setTimer(int i, int duration){
	timer_flag[i] = 0;
	timer_counter[i] = duration/TICK;
}
void timer_run(int i){
	if(timer_counter[i] > 0){
		timer_counter[i]--;
		if(timer_counter[i] <= 0) timer_flag[i] = 1;
	}
}
void timerRun(){
	timer_run(0);
	timer_run(1);
	timer_run(2);
	timer_run(3);
	timer_run(4);
	timer_run(5);
	timer_run(6);
	timer_run(7);
	timer_run(8);
	timer_run(9);

}
