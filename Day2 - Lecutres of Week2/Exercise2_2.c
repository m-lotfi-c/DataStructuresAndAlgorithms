// Create a constant which can find the square of any value by its own
#include<stdio.h>

#define SQ(x) x*x

#define PI 3.14

int main(){
	
	int a = 2;
	printf("\nThe Square of %.2f is %.2f", PI, SQ(PI));
	printf("\nThe Square of %d is %d", a, SQ(a));
	
	return 0;
} 
