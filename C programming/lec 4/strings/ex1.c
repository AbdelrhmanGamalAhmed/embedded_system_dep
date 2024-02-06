/*
 * ex1.c
 *
 *  Created on: Jan 30, 2024
 *      Author: besog
 */
#include"stdio.h"

void main(){
	char s[100];
	char chr;
	int i=0;
	int count=0;

	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	  	fgets(s,sizeof(s),stdin);
	printf("enter a character to find frequency of : ");
		fflush(stdin);fflush(stdout);
		scanf("%c",&chr);
		while(s[i]!= 0){
			if(s[i] == chr){
				count++;
			}
			i++;
		}
printf("frequency of %c is : %d",chr,count);
}

