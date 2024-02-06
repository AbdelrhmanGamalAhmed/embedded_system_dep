/*
 * ex3.c
 *
 *  Created on: Jan 29, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	int arr[10][10]={0};
	int row=0;
	int col =0;
	int i,k;
printf("please enter the number of rows and columns \n");
	fflush(stdout);fflush(stdin);
scanf("%d %d ",&row,&col);
//scanf("%d ",&col);
for(i=0;i<row;i++){
		for(k=0;k<col;k++){
			printf("please enter a%d%d \n",i+1,k+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&arr[i][k]);
			}
	}
printf("entered Matrix \n");
fflush(stdout);fflush(stdin);
for(i=0;i<row;i++){
		for(k=0;k<col;k++){
printf(" %d   ",arr[i][k]);
fflush(stdout);fflush(stdin);
		}
		printf("\n");
	}
printf("transpose Matrix \n");

for(i=0;i<col;i++){
for(k=0;k<row;k++){
	printf(" %d   ",arr[k][i]);
	fflush(stdout);fflush(stdin);
			}
			printf("\n");
	}
		}

