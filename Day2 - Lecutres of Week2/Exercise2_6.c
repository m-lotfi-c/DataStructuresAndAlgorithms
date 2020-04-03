//Understanding and learning Arrays
#include<stdio.h>

#define SIZE 100

void printArray(int, int[]);
void maxElement(int, int[]);


int main(){
	int num;
	printf("How many elements in the array (1-100)?");
	scanf("%d", &num);
	printf("\n");
	
	int A[SIZE];
	
	printf("Enter %d integer(s):", num);
	int i = 0;
	for(i; i <num; i++){
		scanf("%d", &A[i]);
	}
	
	printf("Elements in the array are : ");
	//Display all the elements of the array
	printArray(num, A);
	
	//Sum of all the elements of the array
	maxElement(num, A);
		

	return 0;
}


void printArray(int size, int arr[]){
	int i = 0;
	for(i; i < size; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void maxElement(int size, int arr[]){
	int i = 0;
	int max = 0;
	
	max = arr[i]; 
	
	for(i=1; i < size; i++){
		if(max <= arr[i])
		max = arr[i];
	}
	
	printf("Maximum element in the array: %d", max);
}


