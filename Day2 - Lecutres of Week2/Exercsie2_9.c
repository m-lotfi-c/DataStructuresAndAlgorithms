//Declare 3 variables: int, float and char
//Print memory address where each variable is kept
//Print value at that memory address

#include<stdio.h>

int main(){
	
	
	//Here the value that is stored in the p is address of i
	//Though I wrote it like *p = &i, it is actually p = &i;
	//These are the problems in the syntax understanding
	int i = 100, *p = &i;
	float f = 100.500000, *q = &f;
	char c = 'z', *r = &c;

	//----------for % value-----------
	// for having the pointer as a result we need to enter *p
	//for actual hex value we need to enter %x
	// for having the Address we need %d because it is just an integer value	
	
	//---------for the ,variable------
	//p denotes the pointer value of the variable
	//*p denotes the value of actual variable
	//&*p denotes the address of the variable
	
	printf("Address of integer i = %p", &*p);
		printf("\nAddress of float f = %p", &*q);
		printf("\nAddress of character c = %p", &*r);
	
	printf("\n--------------------------------");
	
	printf("\nValue at address of i = %d", *p);
	printf("\nValue at address of f = %f", *q);
	printf("\nValue at address of c = %c", *r);
	
	
	return 0;
}
