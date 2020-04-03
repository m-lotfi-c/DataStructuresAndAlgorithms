//One more example of recursive function : factorial problem
// Calculate n!
//Use  Recursive factorial(int n) function
//You program should NOT exit unless there is an error.
//If n > 50 you need to print a message: "Value is too big"
//In case of negative you need to print an error message "Incorrect Input" and exit the program.
//What's the value of 50!?



#include<stdio.h>

//Reading value function
long double readInt();

//Factorial function calculates the factorial
long double factorial(long double);

int main(){
	
	 long double num = readInt();
	
	
	long double ans = factorial(num);
	printf("\n The factorial of %.0Lf is %.0Lf", num, ans);	
	
	
	return 0;
}

long double readInt(){
	long double num;
	printf("\nEnter an integer <=50: ");
	scanf("%Lf", &num);
	if(num < 0)
		exit(0);
	else if(num > 50){	
		printf("\nValue too big !");
		return readInt();
	}
	else return num;
}

long double factorial(long double num){
	
	if (num == 1)
	return num;
	else
	return num*factorial(num - 1);
}
