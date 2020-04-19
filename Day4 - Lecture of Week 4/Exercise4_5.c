//Exercise 4.5
/*
> Get number N of elements in the array from console
Create a dynamical array of integers
use malloc and calloc
Use realloc to add 3 more numbers in 
Find the sum of all elements in the array
Find the smallest element in the array
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	//Number of elements
	int n = 0;
	printf("\nEnter the number of elements in array between 1 and 100:");
	scanf("%3d", &n);
	
	int* arr;
	
	arr = (int*) malloc(n * sizeof(int));
	
	if(arr == NULL){
		printf("Memory cannot be reserved for this sorry!");
		exit(1);
	}
	
	
	printf("\nEnter %d integers : ",n);
	register int i = 0;
	for(i; i < n; i++){
		scanf("%d", &arr[i]);
	}

	
	printf("\nThe elements in the array are :");
	i = 0;
	int sum = 0;
	int min = arr[0];
	while(arr[i]){
		printf("%d ", arr[i]);
		sum += arr[i];
		
		//finding the smallest
		if(min > arr[i]){
			min = arr[i];
		}
		
		i++;
	}
	
	
	
	printf("\nSum of the elements : %d", sum);
	printf("\nThe smallest element is : %d", min);
	
	//using realloc for inserting three more values to the array
	int num = 0;
	printf("\n How many more values you want to add :");
	scanf("%d", &num);
	arr = (int*)calloc(arr, num * sizeof(int));
	printf("\nPlease enter %d values to add : ", num);
	i = n;
	for(i; i < num; i++){
		scanf("%d", &arr[i]);
	}

	
	printf("\nThe elements in the array after the addition are :");
	i = 0;
	sum = 0;
	min = arr[0];
	while(arr[i]){
		printf("%d ", arr[i]);
		sum += arr[i];
		
		//finding the smallest
		if(min > arr[i]){
			min = arr[i];
		}
		
		i++;
	}
	
	printf("\nSum of the elements : %d", sum);
	printf("\nThe smallest element is : %d", min);
	
	free(arr);
	
	return 0;
}
