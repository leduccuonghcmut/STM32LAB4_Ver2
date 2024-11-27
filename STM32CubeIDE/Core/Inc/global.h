#include "main.h"


#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT 0
#define MODE_1 1
#define MODE_2 2
#define MODE_3 3
#define MODE_4 4

//#define INIT_1 10
//#define RED_1 11
//#define GREEN_1 12
//#define YELLOW_1 13
//
//#define INIT_2 14
//#define RED_2 15
//#define GREEN_2 16
//#define YELLOW_2 17

extern int STATUS_MODE;

extern int status_lane1;
extern int status_lane2;

extern int red1TimeMAX;
extern int green1TimeMAX;
extern int yellow1TimeMAX;

extern int red2TimeMAX;
extern int green2TimeMAX;
extern int yellow2TimeMAX;

extern int red1_time;
extern int green1_time;
extern int yellow1_time;

extern int red2_time;
extern int green2_time;
extern int yellow2_time;


extern int indexLEDmot;
extern int indexLEDhai;

//#define display_traffic_lane1 30
//#define modify_red1 31
//#define modify_green1 32
//#define modify_yellow1 33
//
//#define display_traffic_lane2 35
//#define modify_red2 36
//#define modify_green2 37
//#define modify_yellow2 38

extern int led_buffer_lane1[2];
extern int led_buffer_lane2[2];

extern int value1_buffer[3];
extern int value2_buffer[3];

#endif /* INC_GLOBAL_H_ */
