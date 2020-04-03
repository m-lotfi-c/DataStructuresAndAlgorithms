//experimenting with the complexity of true and false in C Programming
#include<stdio.h>

int main(int argC, char** argv){
	int i = 4;
	
	//Here the signs are taken as comparison
	if(i == 3)
	printf("true\n");
	else
	printf("false\n");
	
	//Here the signs are taken as assignment
	//if i = 0 then it is false and for any non-zero value it is true
	if(i = 3)
	printf("true");
	else
	printf("false");
	
	
	//switch-case Statement
	switch(i){
		case 1:
			printf("The Answer id 1");
			break;
	
		case 2:
			printf("The Answer id 2");
			break;
			
		case 3:
			printf("The Answer id 3");
			break;
	
		case 4:
			printf("The Answer id 4");
			break;
	
		default:
			printf("This is the default case\n");
	}
	
	
	printf("\n");
	
	//For loop;
	int j = 0;
	for(j; j < i; j++){
		printf("*");
	}
	
	printf("\n");
	
	//while Loop
	j =0;
	while(j < i){
		printf("$");
		j++;
	}
	
	
	printf("\n");
	
	//do...while loop	
	
	
	j =0;
	do{
		printf("#");
		j++;
	}while(j < i);
	
	
	return 0;
}

