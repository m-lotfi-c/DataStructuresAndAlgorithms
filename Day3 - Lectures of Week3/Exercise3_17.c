//Exercise 3_17
#include<stdio.h>

int main(){
	char* name = "Alex";
	
	printf("Name : %s\n", name);
	
	char *people[] = {"Dave", "Mike", "Selena"};
	int i;
	for(i=0; i<3 ; i++){
		printf("Name: %s\n", people[i]);
	}
	
	return 0;
}
