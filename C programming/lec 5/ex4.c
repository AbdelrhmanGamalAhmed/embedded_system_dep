/*
 * ex4.c
 *
 *  Created on: Feb 6, 2024
 *      Author: besog
 */
#include<stdio.h>
int powerofnum(int num,int power);
void main(){
	int number ;
	int power;
	printf("enter base number ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("enter power number (positive intiger) ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&power);

	printf("%d ^ %d = %d",number,power,powerofnum(number,power));
}
int powerofnum(int num,int power){
	int i=0;
	int output = 1;
	do{
		output*= num;
		i++;
	}while(i<power);
return output;
}

