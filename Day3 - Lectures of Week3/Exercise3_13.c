//Exercise 3_13
#include<stdio.h>
#include<string.h>

#define MAX_LEN 100

#define REMOVEN(str) str[strcspn(str, "\n")]='\0'

char* getName();

int main(){
	printf("Please Enter your name :");
	char* name;
	name = getName();
	
	printf("The name you entered is : %s", name);
	return 0;
}


char* getName(){
	static char str[MAX_LEN] = {0};
	
	while (!str[0]) {    
        printf("Input your name: ");
        fgets(str, sizeof(str), stdin);
        REMOVEN(str);
   }	
	return str;
}
