//Pointers and Type Casting
//Can we re-point "integer" pointer to a double variable?

#include<stdio.h>
int main(){
	
	//Here the value of x = 100.1
	double y, x = 100.1;
	int z, *p;
	void* q;
	
	
	//void *ptr;
	//char c = 'C';
	//ptr = &c;
	
	//Here the integer pointer is assigned the address of x
	//There are some losses of data as the pointer is of integer type and the x was double 
	*((*int)p) =  &x;
	*((*double)q) =  &x;
	
	//Y has the value of the pointer now
	//again the pointer got changed and the value is being stored in y which is of double type
	y = *((*int)p);
	
	printf("The incorrect value of y is : %f", y);
	
	y = *((*double)y);
	printf("\nThe value of y came from pointer q is is : %f", y);
	
	
	z = *p;
	printf("\nThe incorrect value of z is %d", z);
	
	
	z = *q;
	printf("\nThe value of z came from pointer q is %d", z);
	
	return 0;
}
