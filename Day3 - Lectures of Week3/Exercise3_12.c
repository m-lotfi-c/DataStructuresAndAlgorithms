//Returning pointer from a function...
#include<stdio.h>

int* returnNumber();

int main(){
	int num;
	printf("\nEnter a number :");
	//getting the value from the user
	scanf("%d", &num);
	int* p = returnNumber();
	printf("\n The value of number is : %d", *p);
	return 0;
}

int* returnNumber(){
	static int num1 = 10;
	num1++;
	return (&num1);
}
