//Exercise 4_6
#include<stdio.h>
int main(){
	int x = 3000;
	
	int *ptr;
	
	//Here pptr is the pointer to the pointer
	//It can only take the memory of another pointer
	int **pptr;
	
	ptr = &x;
	pptr = &ptr;
	
	//The value of x is displayed
	printf("\nThe value of x is: %d", x);
	//The value of *ptr(*&x) = value of x
	printf("\nThe value of x is: %d", *ptr);
	//The value of **pptr *pptr = ptr coz pptr = &ptr
	printf("\nThe value of x is: %d", **pptr);
	
	printf("\nThe value of ptr is:  %p", ptr);
	printf("\nThe value of pptr is:  %p", pptr);
	printf("\nThe value of *pptr is:  %p", *pptr);
	
	return 0;
}
