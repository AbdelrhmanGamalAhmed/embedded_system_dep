/*
 * ex2.c
 *
 *  Created on: Jan 30, 2024
 *      Author: besog
 */


/*
 * ex1.c
 *
 *  Created on: Jan 30, 2024
 *      Author: besog
 */
#include"stdio.h"
void main(){
	char s[100];
	char i=0;

	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",s);
	while(s[i]!=0){
	i++;
	}
	printf("length of string is %d",i);
	}

