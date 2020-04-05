//string token example 
//Exercise 3.8
#include<stdio.h>
#include<string.h>

int main(){
	char str[100] = "hello World what's up";
		
	//To have a string without specifying size
	char *token;
	
	token = strtok(str, " ");
	
	while (token != NULL){
		printf("%s = %zu \n", token, strlen(token));
		token = strtok(NULL, " ");
	}
	return 0;
}
