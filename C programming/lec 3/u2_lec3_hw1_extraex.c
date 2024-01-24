/*
 * u2_lec3_hw1_extraex.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */


#include "stdio.h"
void main(){
	int a ,b ;
	printf("enter value of a \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("enter value of b \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	 a= a^b;
	 b= a^b;
	 a =a^b ;
	printf("After swapping, value of a = %d \n",a);
	printf("After swapping, value of b = %d",b);
}
