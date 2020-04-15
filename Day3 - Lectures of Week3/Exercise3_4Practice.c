#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//This was the review from last Time
int main(){

	char str[] = "My String";
	//Smae as char* p = &str[0];
	
	char* p = str;
	
	//The pointer %p
	printf("The value of p: %p\n", p);
	//Expected Result : location of the string in the form of hex
	
	//The string %s
	printf("The value of p: %s\n", p);
	//Fetching out the string from the pointer p
	
	//The character from pointer so it should be the first element
	printf("The value of *p: %c\n", *p);
		
		
	//The length of the srting
	printf("String length: %zu\n", strlen(str));
	//Length of the string without the null terminating character
	
	//Size of the string
	printf("Size of String: %zu\n", sizeof(str));
	//Size of the string in the form of bytes = size of char * length of the string + 1(for the null terminating character)
	
	str[2]= 0;
	//Length of the string after changing this element
	//So changing the element to integer limits the length of the string
	//If we add 0 as '10' then the string length remmains the same.
	//So 0 == null for the characters so it gets breaked down but if we enter anything else instead of 0 -- there wont be any changes
	
	printf("String length: %zu\n", strlen(str));
	//Here length of the string becomes 2 as the 3rd element became 0

	//Size of the string after changing this element
	printf("Size of string: %zu\n", sizeof(str));
	//Here the size of string remains the same
	return 0;
}
