/*
 * ex3.c
 *
 *  Created on: Feb 6, 2024
 *      Author: besog
 */
/*
 * Q9.c
 *
 *  Created on: Feb 5, 2024
 *      Author: besog
 */

#include<stdio.h>
void reverse(char *arr , int size);
void main (){
	  char arr[100];
	  	  	  int size = 0;
		      printf("Input:\n");
		      fflush(stdin);fflush(stdout);
		      fgets(arr,sizeof(arr),stdin);
		   while(arr[size]!=0){
		    	  size++;
		      }
		   size--;
		      reverse(arr,size);
}
void reverse(char *arr,int size){
char rev[100];
int i ;
int k = size-1;
for(i=0;i<size;i++){
	rev[i]=arr[k];
	k--;
}
printf("%s",rev);
}









