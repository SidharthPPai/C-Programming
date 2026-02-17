////////////////////////////////////////////////////////////////////
// 5. Simple C program to multiply the array with 3 and display
//-----------------------------------------------------------------
//
// g++ ArrMulfn -o arr
// arr 2 3 9 1 8

#include <stdio.h>
#include <stdlib.h>


void multiplyByThree(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 3;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
   
  
    if (argc < 3) {
        printf("Command line error");
        return 1;
    }


    int size = atoi(argv[1]);


    if (argc != size + 2) {  // +2 → program name + size
        printf("Error: You entered size = %d but provided %d numbers.\n", size, argc-2);
        return 1;
    }


    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = atoi(argv[i + 2]);
    }

    printf("Original array:  ");
    printArray(arr, size);

   
    multiplyByThree(arr, size);

    printf("After ×3:       ");
    printArray(arr, size);

    return 0;
}