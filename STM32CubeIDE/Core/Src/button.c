#include "button.h"

int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE}; // trạng thái ổn định trước đó

int timerForKeyPress = 100;// nhấn đè thì 1s mới xử lý

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int button1_long_flag = 0;
int button2_long_flag = 0;
int button3_long_flag = 0;


int isButton1_Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
int isButton2_Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3_Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}
int isButton1_Pressed_Long(){
	if(button1_long_flag == 1){
		button1_long_flag = 0;
		return 1;
	}
	return 0;
}
int isButton2_Pressed_Long(){
	if(button2_long_flag == 1){
		button2_long_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3_Pressed_Long(){
	if(button3_long_flag == 1){
		button3_long_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput1(){
		keyReg0[0] = keyReg1[0];
		keyReg1[0] = keyReg2[0];
		keyReg2[0] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
		if((keyReg0[0] == keyReg1[0]) && (keyReg1[0] == keyReg2[0])){
			if(keyReg3[0] != keyReg2[0]){
				keyReg3[0] = keyReg2[0];
				if(keyReg2[0] == PRESSED_STATE){
					button1_flag = 1;
					timerForKeyPress = 100;
				}
			} else {
				if(keyReg2[0] == PRESSED_STATE){
					timerForKeyPress--;
					if(timerForKeyPress == 0){
						//keyReg3[0] = NORMAL_STATE;
						button1_flag = 1;
						button1_long_flag = 1;
						timerForKeyPress = 100;
					}
				}
			}
		}
}
void getKeyInput2(){
		keyReg0[1] = keyReg1[1];
		keyReg1[1] = keyReg2[1];
		keyReg2[1] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
		if((keyReg0[1] == keyReg1[1]) && (keyReg1[1] == keyReg2[1])){
			if(keyReg3[1] != keyReg2[1]){
				keyReg3[1] = keyReg2[1];
				if(keyReg2[1] == PRESSED_STATE){
					button2_flag = 1;
					timerForKeyPress = 100;
				}
			} else {
				if(keyReg2[1] == PRESSED_STATE){
					timerForKeyPress--;
					if(timerForKeyPress == 0){
						//keyReg3[1] = NORMAL_STATE;
						button2_flag = 1;
						button2_long_flag = 1;
						timerForKeyPress = 100;
					}
				}
			}
		}
}
void getKeyInput3(){
		keyReg0[2] = keyReg1[2];
		keyReg1[2] = keyReg2[2];
		keyReg2[2] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
		if((keyReg0[2] == keyReg1[2]) && (keyReg1[2] == keyReg2[2])){
			if(keyReg3[2] != keyReg2[2]){
				keyReg3[2] = keyReg2[2];
				if(keyReg2[2] == PRESSED_STATE){
					button3_flag = 1;
					timerForKeyPress = 100;
				}
			} else {
				if(keyReg2[2] == PRESSED_STATE){
					timerForKeyPress--;
					if(timerForKeyPress == 0){
						//keyReg3[2] = NORMAL_STATE;
						button3_flag = 1;
						button3_long_flag = 1;
						timerForKeyPress = 100;
					}
				}
			}

		}
}














































//#include "button.h"
//
//int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE}; // trạng thái ổn định trước đó
//
//int timerForKeyPress = 100;// nhấn đè thì 1s mới xử lý
//
//int button1_flag = 0;
//int button2_flag = 0;
//int button3_flag = 0;
//
//int button1_long_flag = 0;
//int button2_long_flag = 0;
//int button3_long_flag = 0;
//
//
//int isButton1_Pressed(){
//	if(button1_flag == 1){
//		button1_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton2_Pressed(){
//	if(button2_flag == 1){
//		button2_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton3_Pressed(){
//	if(button3_flag == 1){
//		button3_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton1_Pressed_Long(){
//	if(button1_long_flag == 1){
//		button1_long_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton2_Pressed_Long(){
//	if(button2_long_flag == 1){
//		button2_long_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton3_Pressed_Long(){
//	if(button3_long_flag == 1){
//		button3_long_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//
//void getKeyInput()
//{
//	for(int i = 0; i < 3; i++){
//		keyReg0[i] = keyReg1[i];
//		keyReg1[i] = keyReg2[i];
//		if(i == 0){
//			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
//			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
//			{
//				if(keyReg3[i] != keyReg2[i])
//				{
//					keyReg3[i] = keyReg2[i];
//					if(keyReg2[i] == PRESSED_STATE)
//					{
//						button1_flag = 1;
//						timerForKeyPress = 100;
//					}
//				}
//				else
//				{
//					if(keyReg2[i] == PRESSED_STATE){
//						timerForKeyPress--;
//						if(timerForKeyPress == 0)
//						{
//							button1_flag = 1;
//							button1_long_flag = 1;
//							timerForKeyPress = 100;
//						}
//					}
//				}
//			}
//		}
//		if(i == 1){
//			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
//			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
//			{
//				if(keyReg3[i] != keyReg2[i])
//				{
//					keyReg3[i] = keyReg2[i];
//					if(keyReg2[i] == PRESSED_STATE)
//					{
//						button2_flag = 1;
//						timerForKeyPress = 100;
//					}
//				}
//				else
//				{
//					if(keyReg2[i] == PRESSED_STATE){
//						timerForKeyPress--;
//						if(timerForKeyPress == 0)
//						{
//							button2_flag = 1;
//							button2_long_flag = 1;
//							timerForKeyPress = 100;
//						}
//					}
//				}
//			}
//		}
//		if(i == 2){
//			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
//			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
//			{
//				if(keyReg3[i] != keyReg2[i])
//				{
//					keyReg3[i] = keyReg2[i];
//					if(keyReg2[i] == PRESSED_STATE)
//					{
//						button3_flag = 1;
//						timerForKeyPress = 100;
//					}
//				}
//				else
//				{
//					if(keyReg2[i] == PRESSED_STATE){
//						timerForKeyPress--;
//						if(timerForKeyPress == 0)
//						{
//							button2_flag = 1;
//							button3_long_flag = 1;
//							timerForKeyPress = 100;
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//
