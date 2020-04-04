//Understanding Swap funciton
#include<stdio.h>

void swap(int*, int*);

int main(){
	int x=3, y=4;
	printf("The Values of x and y before swapping = %d and %d", x, y);
	swap(&x, &y);
	printf("\nThe Values of x and y after swapping = %d and %d", x, y);
	return 0;
}

//Here the Values of x and y are sent using the memory location of x and y
//On the receiving end they get stored into the x and y
//They are stored into the x and y and as the memory locations arre getting changed,
//we dont need to send anything back to the main method

void swap(int* x, int* y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
