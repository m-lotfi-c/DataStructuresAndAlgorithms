//Read multiple Strings
#include<stdio.h>

int main(){
	
	FILE *fp;
	char buff[100];
	
	if((fp = fopen("Yatharth.txt", "r")) == NULL){
		perror("fopen()");
		exit(1);
	}
	while(!feof(fp)){
		
		//fp remains where it left the last time
		//If we use rewind the pointer goes back to the beginning of the file
		if(fgets(buff, sizeof(buff), fp))
		printf("%s", buff);
	}
	fclose(fp);	
	return 0;
}
