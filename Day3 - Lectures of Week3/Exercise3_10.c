//Exercise 3_10
//Get String form the concolse
//Remove the new line character and print the string
//Print number of digits in the string using countDigits(..)

#include<stdio.h>
#include<string.h>

void countDigits(char*, int);

int main(){
	char str[100];
	
	//For printing the statement
	puts("\nEnter a String : ");
	//For accepting the value from the user
	scanf("%10[^\n]s", str);
	int length = strlen(str);
	
	//Number of digits in the string
	countDigits(str, length);
	return 0;
}


void countDigits(char* str, int length){
	int i = 0, total = 0;
	for(i ; i < length; i++){
		if( str[i] >= '0' && str[i] <= '9' )
		{
			++total;
		}
	}
		printf("\nTotal number of digits in the string are : %d", total);
		
}
