/*
 * ex4.c
 *
 *  Created on: Jan 29, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	int arr[100]={0};
	int i,k,x,y;
printf("please enter the number of elements \n");
fflush(stdin);fflush(stdout);
scanf("%d",&i);
for(x=0;x<i;x++){
	arr[x]=x+1;
printf("%d",arr[x]);
}
printf("\n please enter the element to be inserted \n");
fflush(stdin);fflush(stdout);
scanf("%d",&k);
printf("please enter the location \n");
fflush(stdin);fflush(stdout);
scanf("%d",&y);


for(x=0;x<i;x++){
	if((x+1)==y){
		arr[x]=k;
	}
printf("%d",arr[x]);

}

}

