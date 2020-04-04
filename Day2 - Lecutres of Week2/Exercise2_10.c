//Add two integers using pointers
//Find the maximum number between these integers

#include<stdio.h>

int main(){
	
	int num1, num2, *p = &num1, *q = &num2;
	printf("Please enter two integers :");
	scanf("%d %d", &num1, &num2);
	printf("\n");
	
	printf("`Result: %d + %d = %d", *p, *q, (*p + *q));
	
	if(*p < *q){
		printf("\nMaximum number is %d", *q);
	}
	else if(*p >= *q){
		printf("\nMaximum number is %d", *p);
	}
	return 0;
}
