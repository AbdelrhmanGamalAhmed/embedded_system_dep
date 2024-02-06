/*
 * ex2.c
 *
 *  Created on: Feb 6, 2024
 *      Author: besog
 */
#include<stdio.h>
int factorial(int num);
void main(){
	int number ;
	printf("enter a positive integer ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);

	printf("factorial of %d is : %d",number,factorial(number));
}
int factorial(int num){
	int output;
	while(num>0){
	if(num ==1){
		return 1;
	}else{
		output=num*factorial(num-1);
		return output;
	}
	}

}
