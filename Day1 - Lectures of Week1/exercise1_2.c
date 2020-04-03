#include<stdio.h>

int main(){
	 
	//declaring integer variables
	int num1, num2;
	int sum;
	
	//Enter the 1st number msessage + system input
	printf("Enter 1st number :"); 
	 scanf("%d",&num1);

	//Enter the 2nd number msessage + system input
	printf("\nEnter 2nd number :"); 
	 scanf("%d",&num2);

	//Adding both the numbers
	sum = num1 + num2;
	printf("\nThe result after addign %d and %d is %d", num1, num2, sum);
	
	printf("\nThanks, by Yatharth Soni");
	return 0;
}
