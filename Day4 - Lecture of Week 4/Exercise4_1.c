//Exercise 4_1
//Pointers can also be pointed on C functions
#include<stdio.h>

void display();

int main(){
	printf("Address of function display is %p \n", display);
	display();
	
	return 0;
}

void display(){
	printf("Long Live all of you \n");
}
