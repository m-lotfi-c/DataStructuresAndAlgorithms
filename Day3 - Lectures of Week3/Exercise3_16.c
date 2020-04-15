//Exercise 3_16
//Array of strings
#include<stdio.h>

int main(){
	int arr1[] = {10, 100, 1000, 10000, 100000};
	int arr2[] = {20, 200, 2000, 20000, 200000};
	int arr3[] = {30, 300, 3000, 30000, 300000};
	register int i, j;
	
	int *ptr[3];
	ptr[0] = arr1;
	ptr[1] = arr2;
	ptr[2] = arr3;
	
	for( i=0; i<3; i++){
		for(j=0; j<5; j++ ){
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
