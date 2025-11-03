/*Valerian Sarange
PA106/G/28839/25
2D Array for scores*/
#include<stdio.h>
int main(){
	int scores1[2][2]={
	{65, 92},
	{84, 72}
	};
	
	int scores2[2][2]={
	{35, 70},
	{59, 67}	
	};
	
	printf("elements of scores1\n");
	for(int i=0; i<2; i++){
		for(int n=0; n<2; n++){
			printf("%d ", scores1[i][n]);
		}
		printf("\n");
	}
	printf("\nelements of scores2\n");
	for(int i=0; i<2; i++){
		for(int n=0; n<2; n++){
			printf("%d ", scores2[i][n]);
		}
		printf("\n");
	}
	return 0;
	
}