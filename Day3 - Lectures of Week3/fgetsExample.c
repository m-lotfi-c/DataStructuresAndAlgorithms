//fgets() funciton
#include<stdio.h>

#define MAXLEN 10

int main(){
	char str[MAXLEN];
	printf("Enter a string : ");
	
	//fgets 1. string address, maxlen is 1 letter less cioz of null terminating character;
	
	fgets(str, MAXLEN+1, stdin);
	
	//puts has str as an input
	puts(str);
	
	return 0;
}
