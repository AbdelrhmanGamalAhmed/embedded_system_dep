/*
 * ex2.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	char x ;
	printf("please enter an alphabet that you want to check \n");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);
	if((x == 'a') || (x == 'A') || (x =='i') || (x == 'I') || (x =='e')|| (x == 'E') || (x == 'o') || (x == 'O') || (x == 'u') || (x== 'U') ){
	printf ("%c in a vowel",x);
	}else{
		printf ("%c in a consonant",x);
	}



}

