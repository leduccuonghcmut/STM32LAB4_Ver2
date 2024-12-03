#include "display7SEG.h"

void display7SEG(int num){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

void display7SEG_2(int num){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, GPIO_PIN_SET);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ee_GPIO_Port,ee_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ee_GPIO_Port,ee_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ee_GPIO_Port,ee_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ee_GPIO_Port,ee_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		default:

			break;
	}
}

//int led_buffer_lane1[2] = {0,0};
//int led_buffer_lane2[2] = {0,0};
//
//int value1_buffer[3] = {0,0,0};
//int value2_buffer[3] = {0,0,0};


void update7SEG(int index_lane1){
	switch(index_lane1){
		case 0:
			  display7SEG(led_buffer_lane1[0]);
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
			  break;
		case 1:
			  display7SEG(led_buffer_lane1[1]);
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			  break;
		}
}

void update7SEG_lane2(int index_lane2){
	switch(index_lane2){
		case 0:
			  display7SEG_2(led_buffer_lane2[0]);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);

			  break;
		case 1:
			  display7SEG_2(led_buffer_lane2[1]);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
			  break;
		}
}





































//#include "button.h"

//int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE}; // trạng thái ổn định trước đó
//
//int timerForKeyPress = 300;// nhấn đè thì 3s mới xử lý
//
//int button_BUT1_flag = 0;
//int button_BUT2_flag = 0;
//int button_BUT3_flag = 0;
//
//int button_BUT1_LongPressed_flag = 0;
//int button_BUT2_LongPressed_flag = 0;
//int button_BUT3_LongPressed_flag = 0;
//
//
//int isButton_BUT1_Pressed(){
//	if(button_BUT1_flag == 1){
//		button_BUT1_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton_BUT2_Pressed(){
//	if(button_BUT2_flag == 1){
//		button_BUT2_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton_BUT3_Pressed(){
//	if(button_BUT3_flag == 1){
//		button_BUT3_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton_BUT1_LongPressed(){
//	if(button_BUT1_LongPressed_flag == 1){
//		button_BUT1_LongPressed_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton_BUT2_LongPressed(){
//	if(button_BUT2_LongPressed_flag == 1){
//		button_BUT2_LongPressed_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//int isButton_BUT3_LongPressed(){
//	if(button_BUT3_LongPressed_flag == 1){
//		button_BUT3_LongPressed_flag = 0;
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
//						button_BUT1_flag = 1;
//						timerForKeyPress = 300;
//					}
//				}
//				else
//				{
//					if(keyReg2[i] == PRESSED_STATE){
//						timerForKeyPress--;
//						if(timerForKeyPress == 0)
//						{
//							button_BUT1_LongPressed_flag = 1;
//							timerForKeyPress = 300;
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
//						button_BUT2_flag = 1;
//						timerForKeyPress = 300;
//					}
//				}
//				else
//				{
//					if(keyReg2[i] == PRESSED_STATE){
//						timerForKeyPress--;
//						if(timerForKeyPress == 0)
//						{
//							button_BUT2_LongPressed_flag = 1;
//							timerForKeyPress = 300;
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
//						button_BUT3_flag = 1;
//						timerForKeyPress = 300;
//					}
//				}
//				else
//				{
//					if(keyReg2[i] == PRESSED_STATE){
//						timerForKeyPress--;
//						if(timerForKeyPress == 0)
//						{
//							button_BUT3_LongPressed_flag = 1;
//							timerForKeyPress = 300;
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//
