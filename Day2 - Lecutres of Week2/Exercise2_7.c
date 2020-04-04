//Exercise 2.7
/* Create a variable length array, fill it with random numbers (1-10) and then find
two largest elements.
You can start with previous exercise or initial template(on SLATE)
*/

#include<stdio.h>

#define MAX 10

//Random number generator
int rnd(int);
//Largest number finder
void findTwoLargest(int[], int);

int main(){
	int num;
	printf("How many elements in the array? ");
	scanf("%d",&num);
	printf("\n");
	
	int arr[num];
	int i = 0;
	
	
	srand((unsigned int)time(NULL));

	

	//generate and add the elements in the 
	printf("\n Elements in the array : ");
	for(i; i < num; i++){
		arr[i] = rnd(MAX);
		printf("%d \t", arr[i]);
	}
	
	//try to minimize the number of loops in the main funciton
	//find two largest among these
	findTwoLargest(arr, num);
	
		
	return 0;
}


int rnd(int max){
	//Creates random numbers between 1 and max
	return ((rand()%max)+1);
}

void findTwoLargest(int arr[], int num){
	int max1, max2;
	max1 = arr[0];
	max2 = arr[1];
	int i = 0;
	//Process for finding Max1
	for(i; i < num; i++){
		if(max1 <= arr[i]){
			max1 = arr[i];
		}
	}
	i = 0;
	for(i; i < num; i++){
		if(max2 <= arr[i] && arr[i] != max1){
			max2 = arr[i];
		}
	}
		
	
	printf("Two largest elements: %d %d", max1, max2);
}
