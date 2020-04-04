//Pointers and Arrays in C
#include<stdio.h>
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int* p;
	
	printf("The address of arr[0] is : %p\n", &arr[0]);
	printf("\nThe address of arr is : %p\n", arr);
	
	p = arr;
	
	//Here *p will be equal to the value of arr[0]
	printf("\nThe value of first element of %d", *p);
	
	//For loop for displaying all the elements of the array using pointer
	int i = 0;
	for(i; i < 5; i++){
		printf("%d \t", *p + i);
	}
	
	return 0;	
}
