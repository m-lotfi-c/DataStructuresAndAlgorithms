//Exercise 3_18
#include<stdio.h>
#include<string.h>

int main(){
	char str[3][15], *ptr[3];
	
	int i;
	for(i = 0; i < 3; i++){
		printf("Enter string # %d", i+1);
		
		fgets(str[i], sizeof(str[i]),stdin);
		str[i][strcspn(str[i], "\n")] = 0;
		ptr[i]= str[i];
	}
	for(i = 0; i < 3; i++){
		printf("String #%d is %s \n", i+1, ptr[i]);
	}
	
	return 0;
}
