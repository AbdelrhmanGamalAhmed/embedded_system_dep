/*
 * ex5.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	char x ;
	printf("please enter a character \n");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);
	if ('a' <= x && x<='z'){
		printf("%c is an alphabet",x);
	}else if('A' <= x && x<='Z'){

		printf("%c is an alphabet",x);
	}
	else{

		printf("%c is not an alphabet",x);
	}
}

