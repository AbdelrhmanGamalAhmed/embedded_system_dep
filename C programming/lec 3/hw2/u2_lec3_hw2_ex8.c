/*
 * ex7.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	float x ;
	float y;
	float sum = 0 ;
	char i ;
	printf("please enter operator either + or - or * or devide \n");
	fflush(stdout);fflush(stdin);
	scanf("%c",&i);
	if ((i =='+') ||(i =='-')||(i == '*') || (i == '/')){
	printf("please enter two operands: \n");
	fflush(stdout);fflush(stdin);
	scanf("%f\n%f",&x,&y);
	switch(i){
	case 42:
	{
		sum = x*y;
		break;
	}
	case 43:{
		sum = x+y;
		break;
	}
	case 45:
	{
		sum = x-y;
	break;
	}
	case 47:
	{
		sum =x/y;
	break;
	}

	}
	printf("%f  %c  %f =%f",x ,i ,y ,sum);
	}else{
		printf("you didn't enter a valid opernad");
	}

}

