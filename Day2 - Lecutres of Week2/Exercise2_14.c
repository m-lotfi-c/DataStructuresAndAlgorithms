// -------------- Exercise 2.14

#include <stdio.h>

int main() {
   
    /* Because the  sizeof  operator results in an unsigned integer value, 
     * you output it using the %u or better %zu  specifier. */
    printf("sizeof(char)   = %zu bytes\n", sizeof(char));
    printf("sizeof(short)  = %zu bytes\n", sizeof(short));
    printf("sizeof(int)    = %zu bytes\n", sizeof(int));
    printf("sizeof(long)   = %zu bytes\n", sizeof(long));
    printf("sizeof(float)  = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));

    printf("sizeof(unsigned int) = %zu bytes\n", sizeof(unsigned int));
    printf("sizeof(long double)  = %zu bytes\n", sizeof(long double));

	
	//In all the 32-bit CPU the size of int* or any pointers are 4 bytes and in
	//64-bit 8Bytes
    printf("---------------------------------------\n");
  
    printf("sizeof(int *)    = %zu bytes\n", sizeof(int *));
    printf("sizeof(long *)   = %zu bytes\n", sizeof(long *));
    printf("sizeof(float *)  = %zu bytes\n", sizeof(float *));
    printf("sizeof(double *) = %zu bytes\n", sizeof(double *));
    printf("sizeof(void *)   = %zu bytes\n", sizeof(void *));

    return (0);
}


