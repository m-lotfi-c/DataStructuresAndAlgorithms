//Demonstrate the buffer overflow problem with scanf() funciton.
// Limiting 9 characters in scanf() function

#include<stdio.h>

int main(){
	
	char str[10];
	
	//Case: 1 for entering only 4s in a string 
//	printf("Case 1 enter only 4s in a string :");
	//We aren't using &str here for memory address because str is already a memory address for Array of characters
//	scanf("%4s", str);
//	printf("\n Result 1 : %s", str);
	
	
	
	//Case: 2 for entering 9[^\n] in a string 
	printf("\nCase 2 enter only 9[^\n] in a string :");
	
	//Here the %9 denotes how many characters are to be accepted. 
	//\n denotes that you can even accept the characters until the new line character comes up
	scanf("%9[^\n]", str);
	
	printf("\nResult 2 : %s", str);	
	
	return 0;
}
