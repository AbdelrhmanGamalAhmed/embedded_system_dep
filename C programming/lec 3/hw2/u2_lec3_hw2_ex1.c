/*
 * ex1.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	int number = 0;
	printf("please enter an integer that you want to check \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&number);
	if((number %2) == 0){
		printf("%d is even ",number);
	}else{
		printf("%d is odd ",number);
	}
}

