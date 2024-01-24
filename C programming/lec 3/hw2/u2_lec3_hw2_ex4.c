
/*
 * ex4.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	float x ;
	printf("please enter a number \n");
	fflush(stdout);fflush(stdin);
	scanf("%f",&x);
	if(x > 0 ){
		printf(" %f is positive",x);
	}
	else if (x<0){
		printf("%f is negative",x);
	}
	else{
		printf("you entered zero");
	}

}

