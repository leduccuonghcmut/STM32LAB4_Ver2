#include "main.h"
#include "global.h"
#include "software_timer.h"
#include "display7SEG.h"

#ifndef INC_FSM_SETTING_H_
#define INC_FSM_SETTING_H_

extern int StatusLED1;

#define CountDownLED1 20
#define DisplayLED1Mode2 21
#define DisplayLED1Mode3 22
#define DisplayLED1Mode4 23

extern int StatusLED2;

#define CountDownLED2 24
#define TimerValue 25


void FSMDisplayLED1();
void FSMDisplayLED2();
void FSM_Display_2LED();

#endif /* INC_FSM_SETTING_H_ */
