/*
 * ex7.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	int x ;
	int sum =1;
	int i;
	printf("please enter an integer \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	if (x >0){

	for(i=1;i <=x;i++){
sum=sum*i;
     }
	printf("factorial is %d",sum);
	}
	else if(x == 0){
		printf("factorial is 1");

	}else {
		printf("ERROR Negative numbers doesn't have factorials");
	}


}

