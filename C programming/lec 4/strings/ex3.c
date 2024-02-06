/*
/*
 * ex3.c
 *
 *  Created on: Jan 30, 2024
 *      Author: besog
 */

#include"stdio.h"
void main(){
	char s[100]={0};
	char reverse[100]={0};
	char i=0;
char k,j ;
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",s);
	while(s[i]!=0){
	i++;
	}
	j=i;
for(k=0;k<i;k++){
	reverse[j-1]=s[k];
	j--;
}printf("reverse string is: %s",reverse);
}
