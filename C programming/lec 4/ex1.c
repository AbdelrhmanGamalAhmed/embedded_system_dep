/*
 * ex1.c
 *
 *  Created on: Jan 29, 2024
 *      Author: besog
 */
#include "stdio.h"
void main(){
	float arr_1[2][2]={0};
	float arr_2[2][2]={0};
	int i , k;
	printf("please enter the first Matrix\n");
	fflush(stdout);fflush(stdin);
	for(i=0;i<2;i++){
		for(k=0;k<2;k++){
			printf("please enter a%d%d \n",i+1,k+1);
			fflush(stdout);fflush(stdin);
scanf("%f",&arr_1[i][k]);
			}
	}
	printf("please enter the second Matrix\n");
	fflush(stdout);fflush(stdin);
	for(i=0;i<2;i++){
		for(k=0;k<2;k++){
			printf("please enter a%d%d\n",i+1,k+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&arr_2[i][k]);
			}
	}
printf("the sum of the matrix:\n %f \t %f \n %f \t %f",arr_1[0][0]+arr_2[0][0],arr_1[0][1]+arr_2[0][1],arr_1[1][0]+arr_2[1][0],arr_1[1][1]+arr_2[1][1]);
fflush(stdout);fflush(stdin);

}

