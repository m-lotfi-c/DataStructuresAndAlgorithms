//Using fwrite, fread and fseek...
#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	char c[] = "This is a test on fwrite, fread and fseek";
	char buffer[100];
	
	fp = fopen("Yatharth.txt", "w+");
	//Writing data to the file from c
	fwrite(c, strlen(c)+1, 1, fp);
	
	//Seekignto the beginning
	fseek(fp, 0, SEEK_SET);
	
	//Reading the data from the file
	fread(buffer, strlen(c) + 1, 1, fp);
	
	printf("%s\n", buffer);
	fclose(fp);
	
	return 0;
	
}
