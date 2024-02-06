/*
 * ex5.c
 *
 *  Created on: Jan 30, 2024
 *      Author: besog
 */
#include"stdio.h"
void main(){
	int arr[100]={0};
		int i,k,x,y;
	printf("please enter the number of elements \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	for(x=0;x<i;x++){
		arr[x]=(x+1)+(10*(x+1));
	printf("%d  ",arr[x]);
	}
	printf("\n please enter the element to be searched for \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&k);
	for(x=0;x<i;x++){
			if(k==((x+1)+(10*(x+1)))){
				y = x	;
			}

		}
printf("number found at the location: %d",y+1);
}
