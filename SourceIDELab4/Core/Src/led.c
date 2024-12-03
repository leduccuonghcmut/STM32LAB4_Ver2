#include "led.h"

void toggle_led_red(){
	HAL_GPIO_TogglePin(LED_BLINKY_GPIO_Port, LED_BLINKY_Pin);
}




void toggle_red1(){
	HAL_GPIO_TogglePin(red1_GPIO_Port, red1_Pin);
}
void toggle_green1(){
	HAL_GPIO_TogglePin(green1_GPIO_Port, green1_Pin);
}
void toggle_yellow1(){
	HAL_GPIO_TogglePin(yellow1_GPIO_Port, yellow1_Pin);
}

void toggle_red2(){
	HAL_GPIO_TogglePin(red2_GPIO_Port, red2_Pin);
}
void toggle_green2(){
	HAL_GPIO_TogglePin(green2_GPIO_Port, green2_Pin);
}
void toggle_yellow2(){
	HAL_GPIO_TogglePin(yellow2_GPIO_Port, yellow2_Pin);
}
