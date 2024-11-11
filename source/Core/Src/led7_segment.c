/*
 * led7_segment.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Acer
 */

#include "led7_segment.h"

void display7Seg0(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
			break;
		default:
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			break;
	}
}

void display7Seg1(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
			break;
		default:
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			break;
	}
}

void display7Seg2(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			break;
		default:
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			break;
	}
}

void display7Seg3(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
			break;
		default:
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
			break;
	}
}

void setCountDown7Seg0(int num){
	countDown1 = num;
	display7Seg0(countDown1);
	setTimer(timer1Sec1, 100);
}

void setCountDown7Seg1(int num){
	countDown2 = num;
	display7Seg1(countDown2);
	setTimer(timer1Sec2, 100);
}

void runCountDown7Seg0(){
	if(timer_flag[timer1Sec1] == 1){
		countDown1--;
		setTimer(timer1Sec1, 100);
		display7Seg0(countDown1);
	}
}
void runCountDown7Seg1(){
	if(timer_flag[timer1Sec2] == 1){
		countDown2--;
		setTimer(timer1Sec2, 100);
		display7Seg1(countDown2);
	}
}
