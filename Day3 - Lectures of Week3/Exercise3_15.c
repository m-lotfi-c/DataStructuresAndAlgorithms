//Exercise 3_15
#include<stdio.h>
#include<string.h>

int main(){
	char src[50] = "Xnother Hello World";
	char dest[50];
	strcpy(dest, "Another Hello World");
	printf("\nThe value of dest before after first cpy by strcpy : %s", dest);
	
	//Syntax : memcpy(dest, src, length of the copy to be done)
	memcpy(dest, src, strlen(src) + 1);
	printf("\nThe value of dest before after Second cpy by strcpy : %s", dest);
	printf("\nLength of the dst string is : %d", strlen(dest));
	return 0;
}
