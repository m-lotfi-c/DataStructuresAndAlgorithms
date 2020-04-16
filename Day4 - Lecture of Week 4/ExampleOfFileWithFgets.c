//Example:Read a string with fgets()

#include<stdio.h>
int main(){
	char buff[100];
	
	FILE* fp = fopen("Yatharth.txt", "r");
	if(fp == NULL){
		perror("The file doesnt exists");
		exit(1);
	}
	fgets(buff, sizeof(buff), fp);
	puts(buff);
	

	fclose(fp);
	return 0;
}
