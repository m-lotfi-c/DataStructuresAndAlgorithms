//FSEEK AND REWIND FOR  THE FILE
#include<stdio.h>

int main(){
	FILE *fp;
	char buff[100];
	
	if((fp = fopen("Yatharth.txt", "r")) == NULL){
		perror("fopen()");
		exit(1);
	}
	
	//using feek for going 100 bytes forward...
		fseek(fp, 100, SEEK_SET);
		if(fgets(buff, sizeof(buff), fp))
		printf("\n%s", buff);
	
	//Using seek from the relative reference to go 13 bytes forward
		fseek(fp, 13, SEEK_CUR);
		if(fgets(buff, sizeof(buff), fp))
		printf("\n%s", buff);
	
	//Using seek from the backward reference to go 100 bytes backward
		fseek(fp, -100, SEEK_END);
		if(fgets(buff, sizeof(buff), fp))
		printf("\n%s", buff);
	
	//Using Rewind...
		rewind(fp);
		if(fgets(buff, sizeof(buff), fp))
		printf("\n%s", buff);
		
	
	
	fclose(fp);	
	return 0;
}
