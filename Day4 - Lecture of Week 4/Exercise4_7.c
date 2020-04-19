//Exercise 4.7
#include<stdio.h>
void swap(char** ptr1, char** ptr2){
	char* temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(){
	char* str1 = "Abra";
	char* str2 = "kadabra";
	
	char** pptr1;
	char** pptr2;
	pptr1 = &str1;
	pptr2 = &str2;
	
	
	printf("Message %s %s\n", *pptr1, *pptr2);	
	swap(pptr1, pptr2);
	
	printf("Message %s %s\n", *pptr1, *pptr2);	
	return 0;
}
