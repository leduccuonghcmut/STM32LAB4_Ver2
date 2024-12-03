#include "main.h"


#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[10];
extern int TICK;

void setTimer(int i, int duration);
void timer_run(int i);
void timerRun();


#endif
