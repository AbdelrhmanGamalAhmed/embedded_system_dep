/*
 * ex3.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	float x,y,z ;
	printf("please enter three numbers \n");
	fflush(stdout);fflush(stdin);
	scanf("%f \n%f\n%f",&x,&y,&z);
	if((x > y) &&(x>z)){
		printf("largest number is %f",x);
	}
	else if ((y>x)&&(y>z)){
		printf("largest number is %f",y);
	}
	else{
		printf("largest number is %f",z);
	}

}



