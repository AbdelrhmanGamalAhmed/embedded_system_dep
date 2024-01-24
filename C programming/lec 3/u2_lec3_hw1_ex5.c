/*
 * u2_lec3_hw1_ex5.c
 *
 *  Created on: Jan 24, 2024
 *      Author: besog
 */

#include "stdio.h"
void main(){
	char x ;
	printf("enter a character \n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	printf("ascII value of %c is :%d ",x,x);
}
