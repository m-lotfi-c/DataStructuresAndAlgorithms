//This exercise deals with the usage of functions and mulitple parameters...with return values

#include<stdio.h>

//function Declarations
int engine(int, int);


int main(){
	
	//Removing the Go-TO statements from the program to make the code more clearer
	int x, y=5;
	printf("Input Integer :");
	scanf("%d", &x);
	
	//Calling Engine function with providing x as an argument
	
	printf("Result is %d", engine(x, y));

	return 0;
}


// Here x is considered as an parameter
int engine(int x, int y){
	if (x == 1 || x == 0)
		printf("Result is %d", x);
	else{
	
	x = (x > 0) ? ++x : -x;
	
	x = x + y;
	return x;
	}
}
