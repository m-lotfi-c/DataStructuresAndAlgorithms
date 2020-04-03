//Understanding and learning Arrays
#include<stdio.h>

#define SIZE 100

void printArray(int, int[]);
void sumOfArray(int, int[]);


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
	
	//Display all the elements of the array
	printArray(num, A);
	
	//Sum of all the elements of the array
	sumOfArray(num, A);
		

	return 0;
}


void printArray(int size, int arr[]){
	int i = 0;
	for(i; i < size; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void sumOfArray(int size, int arr[]){
	int i = 0;
	int sum = 0;
	double avg = 0;
	
	for(i; i < size; i++){
		sum += arr[i];
	}
	printf("\nSum of elements is: %d", sum);
	printf("\n");
	
	avg = (double)sum / size;
	printf("Average number is: %.2f", avg);
}


