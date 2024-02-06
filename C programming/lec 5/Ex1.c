/*
 * Ex.c
 *
 *  Created on: Feb 6, 2024
 *      Author: besog
 */
#include<stdio.h>
int isprime(int num);
void main (){
	int number1,number2;
	int i;
	printf("input number1 : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number1);

	printf("input number2 : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number2);
	printf("prime numbers between %d and %d are:   ",number1,number2);

	for(i=number1;i<=number2;i++){
			if(isprime(i)){
				printf("%d   ",i);
			}
		}
}
int isprime(int num){

	int i;
	if(num<=3){
		return 1 ;
		// 1, 2 ,  3 are always prime
	}
	for(i=2;i*i<=num;i++){
	if(num%i==0){
		return 0;
	}
	}
	return 1 ;
}


