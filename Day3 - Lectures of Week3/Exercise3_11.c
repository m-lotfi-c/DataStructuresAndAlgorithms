//Exercise 3_11
//Get String form the concolse
//Remove the new line character and NUMBERS as well
//Print number of digits in the string using countDigits(..)

#include<stdio.h>
#include<string.h>
#include<ctype.h>

//Here we used Max_size so that it is easy for us to
//send the size of the string within the functions
#define MAX_SIZE 100
#define REMOVEN(str) str[strcspn(str, "\n")] = 0

//With the help of pointer we are just sending the pointer to the memory location of the string
void removeDigits(char*);

int main(){
	char str[MAX_SIZE];
	
	//For printing the statement
	printf("\nInput a String : ");
	//For accepting the value from the user %10 limits the input to 10 characters in a string
	//However the thing [^\n] limits the string within a new line character....
	//scanf("%[^\n]s", str);
	
	//Let's learn fgets();
	
	fgets(str, sizeof str, stdin);
	
	//Helps to flush off the  garbage memory
	REMOVEN(str);	
	
	printf("\nInput: %s", str);
	//Number of digits in the string
	removeDigits(str);
	
	printf("\nOutput: %s", str);
	return 0;
}


void removeDigits(char* str){
	size_t i, j;
	i = 0;
	j = 0;
	
	while(str[j]){
		if(!isdigit(str[j])){
			if(i != j){
				str[i] = str[j];
			}
			i++;
		}
		j++;
	}
	str[i] = 0;
}
