//Example of calloc and malloc for dynamic allocation of the memory...
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//introduce the calloc and malloc over here
	//The syntax of malloc is malloc(size_t mallocSize)
	int *p = malloc(10 * sizeof(int));
	
	if(p == NULL){
		perror("malloc()");
		exit(1);
	}
	
	char *q = calloc(10, sizeof(char));
	
	if(q == NULL){
		perror("calloc()");
		exit(1);
	}
	
	//Do something
	
	//increasing the size by some means
	realloc(p, 14 * sizeof(int));
	printf("Successful");
	free(p);
	free(q);
	
	return 0;
}
