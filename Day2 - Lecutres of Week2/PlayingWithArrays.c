//Understanding and learning Arrays
#include<stdio.h>


//Here size is not a constant.. it is find and replace keyword
# define SIZE 5

//Here N is a global variable which can be changed so it will not be accepted by the array
int N = 5;

void printArray(int, int[]);
void changeArray(int, int[], int);


int main(){
	
	int A[SIZE] = {1, 2, 3, 4, 5};
	
	//initialization of arrays does not allow us to enter variable length for an array
	int B[5] = {6, 7, 8, 9, 10};
	
	//displaying the arrays by sending their size and memory location...
	printArray(5, A);
	
	//displaying the second...
	printArray(N, B);
	changeArray(SIZE, A, 2);
	
	
	return 0;
}


void printArray(int size, int arr[]){
	int i = 0;
	for(i; i < size; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void changeArray(int size, int arr[], int multiple){
	int i = 0;
	for(i; i < size; i++){
		arr[i] = arr[i] * multiple;
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
