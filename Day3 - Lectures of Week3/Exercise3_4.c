//Exercise 3.4
//Strings are arrays, and array name is also a pointer to its first element

#include<stdio.h>
int main(){
	//The string in C programming is a kind of array of integers..
	//How ever there is always the null terminating character at the end of every string..
	char str[] = "Hello World";
	//char *str = "Hello World";
	
	//here str is the address of the first element of the string.
	//P is also a memory location of type character
	//*p fetches out the value of that memory location and displays the value residing in it.
	char* p = str;
	
	//The value of the pointer is displayed
	printf("The value of p: %p\n", p);
	
	//The value of the string is displayed
	printf("The value of p: %s\n", p);
	
	//The value of the character at poisiton 0 is displayed
	printf("The value of *p: %c\n", *p);
	
	return (0);
	
	
}

