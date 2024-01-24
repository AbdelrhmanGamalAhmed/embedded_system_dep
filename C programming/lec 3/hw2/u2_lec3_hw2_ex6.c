/*
 * ex6.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	int x ;
	int sum =0;
	int i;
	printf("please enter an integer \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	for(i=0;i <=x;i++){
sum=sum+i;
 }
printf("sum = %d",sum);
}

