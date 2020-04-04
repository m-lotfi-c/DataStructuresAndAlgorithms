// -------------- Exercise 2.13
// Take Exercise 2.4 as a template!

#include <stdio.h>
#define SIZE 5

// You can also use: void changeArr(int array[], int size);
void changeArray(int*, int);

void printArray(int*, int);


int main() {

    // Try using:  int N=SIZE , arr[N] = { 1, 2, 3, 4, 5};
    // The result? Variable length arrays cannot be initialized!
    
    int arr[SIZE]={1, 2, 3, 4, 5};

    // Print elements of the array:
    printArray(arr , SIZE);

    printf("sizeof(arr) is %zu bytes\n", sizeof(arr));
    
    // We modify elements of the array: 
    changeArray(arr , SIZE);

    // Print elements of the array:
    printArray(arr , SIZE);
    
    return 0;
}

// We pass the array and SIZE of the array
void changeArray(int* array, int size) {
    
    printf("sizeof(array) is %zu bytes\n", sizeof(array));
    int i = 0;
    for (i; i<size; i++) {
        array[i] = 2 * array[i];
    }
    
}

void printArray(int* array, int size) {
    printf("Elements in array are: ");
    int i = 0;
    for (i; i< size; i++) {
       printf("%3d ", array[i]);
    }
    printf("\n");
}
