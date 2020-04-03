#include<stdio.h>
#include<stdlib.h>

int x=2, y=2;
void prt(int, int);

int main(){
	int x=1, y=1;
	
	//the changes of the values of the variables in the functions does not affect the values of varibles used in the current function.
	prt(x,y);
	printf("%d\n", x);
	printf("%d\n", y);	
}
void prt(int a, int b){
	++x, ++b;
	printf("%d\n", x++);
	printf("%d\n", b++);	
}
