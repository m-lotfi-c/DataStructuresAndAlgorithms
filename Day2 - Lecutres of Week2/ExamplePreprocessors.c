#include<stdio.h>

//Here we can even add external file like
//#include "myFile"

#define begin {
#define end }
#define THREE 3

int main()
begin
	int num = THREE;
	printf("The value of the variable is %d", num);
	return 0;
end
