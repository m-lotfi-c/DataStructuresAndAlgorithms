#include<stdio.h>

int main(){
	
		int num1, num2;
		printf("Enter two numbers");
		scanf("%d %d", &num1, &num2);
		printf("\n");
		
		
		double explicitAns = (double) num1/ num2; 
		double implicitAns = num1/ num2; 
		
		//Difference between explicit and implicit ans
		
			printf("\n");	
	
		printf("The Answer for explicit is %.2f and for implicit is %.2f", explicitAns, implicitAns);
		
		
		//Just transferring the value from lower data type value to higher and vice versa
		float num3 = num1;
		num3 = 11.56;
		int num4 = num3;
		
			printf("\n");	
	
		printf("The Value from low to high is %.2f and high to low is %d ", num3, num4);
		
		//we can see a value loss while going from higher to lower and no value loss from higher to lower
			
		printf("\n");	
	return 0;
}
