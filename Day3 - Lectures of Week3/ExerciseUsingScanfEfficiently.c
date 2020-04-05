//Scanf() input modifier
#include<stdio.h>
int main(){
	char str[20];
	printf("Please enter a string :");
	
	//Here [] is an input modifier
	//%[^\n] here \n denotes that the string would be saved until the new line character is found
	if(scanf("%[^\n]", str) == 0) {
		printf("Incorrect input!");
		return -1;
	}
	printf("The value: %s\n", str);
	
	return 0;
}
