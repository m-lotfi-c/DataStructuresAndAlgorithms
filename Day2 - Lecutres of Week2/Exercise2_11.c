//Create a function plusTen() that increased by 10
//Use integer as a parameter
//Use pointer to an integer as parameter

#include<stdio.h>

//int plusTen1(int);
void plusTen2(int*);

int main(){
	int num, *p = &num;
	printf("Please enter an integer: ");
	scanf("%d", &num);	
	plusTen2(&num);
	//printf("\nResult from int to int: %d",plusTen1(num));
	printf("\nResult from pointer to pointer: %d",num);
	return 0;
}
//
//int plusTen1(int p){
//	p += 10;
//	return p;
//}

void plusTen2(int* p){
		*p += 10;
}
