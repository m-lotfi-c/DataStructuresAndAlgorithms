//Example of writing a file with fprint()
#include<stdio.h>

int main(){
	//Open Create a file of specific name yatharth.txt
	FILE *fp = fopen("Yatharth.txt", "w");
	if(fp == NULL){
		perror("Error opening/ creating the file");
		exit(1);
	}
	
	int x = 10;
	
	//Trying with help of fprintf
	fprintf(fp, "This is a trial with fprintf");
	fprintf(fp, "Hello World\n");
	fprintf(fp, "The value of x is : %d\n", x);
	
	//Tyring using fputs
	fputs("\nThis is a trial using f puts", fp);
	fputs("\nHello World", fp);
	fputs("\nThe value of x is : ", fp);
	
	fclose(fp);
	return 0;
}
