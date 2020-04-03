//Find maximum of two integers
// Use Ternary operator
// Create your own function maximum(a, b) that returns the maximum of two integers.
#include <stdio.h>
# include <math.h>


int maximum(int, int);

int main(int argC, char** argv){
	
	int num1, num2, num3;
	printf("Input three integers : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("\nThe maximum between %d, %d and %d is %d", num1, num2, num3, maximum(maximum(num1, num2), num3));
	
return 0;	
}

int maximum(int num1, int num2){
	
	//fmax() finds the maximum off the two numbers and is a part of math header file
	int max = fmax(num1, num2);
	return max;
}
