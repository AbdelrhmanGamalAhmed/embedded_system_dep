/*
 * u2_lec3_hw1_ex6.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */

#include "stdio.h"
void main(){
	float a ,b ;
	float temp;
	printf("enter value of a \n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("enter value of b \n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp = a;
	a= b;
	b = temp;
	printf("After swapping, value of a = %f \n",a);
	printf("After swapping, value of b = %f",b);
}
