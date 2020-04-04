// Playing with Pointers
#include<stdio.h>


int main(){
	int i = 100;
	int *p = &i;
	
		//This should be the value of i
		printf("Value of i is %d \n", i);
		
		//This should be the value of i again as it gets replaced by *&i
		printf("Value of *p is %d \n", *p);
	
		//Here the Value of pointer is access which actually is the address of i
		printf("Value of p as an integer is %p \n", p);
		printf("Value of memory address of i is is %d \n", &i);
		
		//Here the hexadecimal memory location of i is fetched and printed
		// x is lowercased and X is upper cased
		printf("Value of i is %x \n", p);
		printf("Value of i is %X \n", p);
	
	return 0;
}
