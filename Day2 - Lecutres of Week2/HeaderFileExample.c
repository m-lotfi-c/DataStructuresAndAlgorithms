//Creating Self-made Header Files

#include<stdio.h>

#include "functions.h"

#ifndef FUNCTIONS_H
	#define FUNCITONS_H
	int maximum(int, int);
#endif

int main(){
	int num1, num2, num3;
	printf("Input three integers : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("\nThe maximum between %d, %d and %d is %d", num1, num2, num3, maximum(maximum(num1, num2), num3));
	
return 0;
}
