//Example of reading a file with fgetc

#include<stdio.h>

int main()
{
	FILE* fp = fopen("Yatharth.txt", "r");
	if(fp == NULL){
		perror("The File does not exists");
		exit(1);
	}
	
	int c; 	
	//1st char
	c = fgetc(fp);
	putchar(c);
	
	//2nd char
	c = fgetc(fp);
	putchar(c);
	
	//3rd char
	c = fgetc(fp);
	putchar(c);
	
	
	
	fclose(fp);
	return 0;
}
