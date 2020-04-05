//Exercise 3.7
//Write a program to count total number of letter, digits and special characters in a string!

#include<stdio.h>

#define FLUSH stdin=freopen(NULL,"r",stdin)



int main(){
	
	char str[100];
	
	printf("Input the string : ");
	//String until new line character
	fgets(str, sizeof(str), stdin);
	
	FLUSH;
	//Total number of letters
	int i;
	int charNum = 0;
	int splChar = 0;
	int numChar = 0;
	
	while(str[i] != '\0'){
		
		//For finding the total number of Letters in the string
		if((str[i] >= 'a' && str[i] <= 'b') || (str[i] >= 'A' && str[i] <= 'B')){
			charNum += 1;
		}
		else if(str[i] >= '1' && str[i] <= '2'){
			numChar += 1;
			printf("\nDigit %d : %c", numChar, str[i]);	
		}
		//For finding the total number of special characters in the string
		else{
			splChar += 1;
			printf("\nSpl Char %d : %c", splChar, str[i]);		
		}
		i++;
	}
	printf("\nNumber of letter in the string is : %d", charNum);
	printf("\nNumber of Digits in the string is : %d", numChar);
	printf("\nNumber of Special characters in the string is : %d", splChar);
	
	
	//Total digits
		
	//Total number of special character
	
	return 0;
}
