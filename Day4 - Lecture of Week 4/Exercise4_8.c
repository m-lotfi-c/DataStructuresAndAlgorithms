//Using heap memory for array of pointers

#include<stdio.h>
#include<stdlib.h>

int main(){
	register i, j;
	
	int* ptr[3];	//Declare the array of pointers
	ptr[0] = (int*) malloc(5 * sizeof(int));
	ptr[1] = (int*) malloc(5 * sizeof(int));
	ptr[2] = (int*) malloc(5* sizeof(int));
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
