#include<stdio.h>
#include<stdlib.h>
// Goal to rpint 20 numbers in the interval of 1-6 in a table


int main(){
	int randNum = 0;
	int i;

	//srand have specific sequence for each unsigned integer with it. So we have to provide
	//different unsigned integers everytime to have different values everytime.
	//Only time in the form of seconds..always random so we fill up the space with time(NULL)
	printf("Random Numbers between 0 and 1");
	

	srand(time(NULL));	
	for(i = 1; i <= 20; i++){
		randNum = (rand() % 6) + 1;
		printf("%d \t",randNum);
		if(i % 5 == 0){
			printf("\n");
		}
	}	
			printf("\n");
			printf("\n");
	printf("Random Numbers between 0 and 1\n");
	
	double randNum1;
	//for having a random value between 0 and 1
	srand(time(NULL));	
	for(i = 1; i <= 20; i++){
		randNum1 = (double) rand() / RAND_MAX;
		printf("%.2f \t",randNum1);
		if(i % 5 == 0){
			printf("\n");
		}
	}	
	return 0;
};
