#include "global.h"

//int status_lane1 = 0;
//int status_lane2 = 0;

int red1TimeMAX = 5, green1TimeMAX = 3, yellow1TimeMAX = 2;
int red2TimeMAX = 5, green2TimeMAX = 3, yellow2TimeMAX = 2;

int red1_time = 5, green1_time = 3, yellow1_time = 2;
int red2_time = 5, green2_time = 3, yellow2_time = 2;


int indexLEDmot = 0;
int indexLEDhai = 0;

int led_buffer_lane1[2] = {0,0};
int led_buffer_lane2[2] = {0,0};

int value1_buffer[3] = {0,0,0};
int value2_buffer[3] = {0,0,0};

int STATUS_MODE = INIT;
