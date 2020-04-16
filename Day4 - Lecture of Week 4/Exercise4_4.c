//Exercise 4.4
//REad the data from the files linux.txt and Windows.txt
//use fscan() and fgets funcitons

//Print strings and their lengths in the console
// Demonstrate the issue with "Newline" characters

//Numerate the strings and save them in the file output.txt

#include<stdio.h>
#include<string.h>

#define MAX_LEN 1000

int main(){
	
	FILE *flinux, *fwindows;
	
	flinux = fopen("linux.txt", "r");
	fwindows = fopen("windows.txt", "r");
	FILE *foutput = fopen("output.txt", "w");
	
	char* strLinux[MAX_LEN];
	char* strWindows[MAX_LEN];
	
	
	//Checking for linux
	if(flinux == NULL || foutput == NULL){
		perror("Linux.txt");
		exit(1);
	}
	
	//Checkign for windows
	if(fwindows == NULL){
		perror("Windows.txt");
		exit(1);
	}
	
	printf("\nThe contents from the Linux files are :-\n");

	//Numerate the string and save that to the file output.txt
	fputs("The data from Windows.txt is: \n", foutput);

	while(!feof(flinux)){
	
	
	//Read the files from the linux.txt and windows.txt using scanf and fgets
		fscanf(flinux,"%[^\r\n]\n ", strLinux);
		
		printf("\n %s", strLinux);
		fputs(strLinux, foutput);
		fputs("\n", foutput);

	}
	printf("\n\nThe contents from the Windows files are :-\n");


	fputs("\n\nThe data from Linux.txt is: \n", foutput);
	while(!feof(fwindows)){
		fscanf(fwindows, "%[^\r\n]\n", strWindows); 	
		
	
		//Print the strings and their lengths in the console
		printf("\n %s", strWindows);
		
		fputs(strWindows, foutput);
		fputs("\n", foutput);
		
	}
	
	
	//Issues with new line characters windows - \r\n and Linux - \n
	
	

	
	
	
	
	fclose(flinux);
	fclose(fwindows);
	fclose(foutput);
	
	return 0;
}
