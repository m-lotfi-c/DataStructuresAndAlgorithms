// MiniQuiz
#include<stdio.h>

int main(){
	
	int A[5] = {1, 2, 3, 4, 5};
	int B[5] = {0};
	
	B=A;
	
	for (int i = 0; i < 5; i++){
		printf("%d", B[i]);
	}
	return 0;
}
