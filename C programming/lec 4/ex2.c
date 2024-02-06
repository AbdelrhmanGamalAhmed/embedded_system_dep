/*
 * ex2.c
 *
 *  Created on: Jan 29, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
float arr[100]={0};
int i;
int n;
float sum =0;
printf("please enter the number of data :");
fflush(stdout);fflush(stdin);
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("%d. enter number: ",i+1);
	fflush(stdout);fflush(stdin);
	scanf("%f",&arr[i]);
	sum =sum+ arr[i];
}
printf("average = %f",sum/n);
}

