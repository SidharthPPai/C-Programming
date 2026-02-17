////////////////////////////////////////////////////////////////////
// 6. C program to perform bubblesort in an array using function
//-----------------------------------------------------------------
//
// g++ Bubblefn.cpp -o bubble
// bubble 1 7 8 9 10


#include <stdio.h>
#include <stdlib.h>


void bubblesort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {


    	if (argc < 2) {
        	printf("Error: Please provide a list of numbers.\n");
        	printf("Usage: %s 5 2 9 1\n", argv[0]);
        	return -1;
   	 }

    
   	 int size = argc - 1;

    
   	 int *numbers = (int *)malloc(size * sizeof(int));

   	 if (numbers == NULL) {
        	printf("Memory allocation failed!\n");
        	return -1;
    	}

    
    	for (int i = 0; i < size; i++) {
        	numbers[i] = atoi(argv[i + 1]);
    	}

   
    	bubblesort(numbers, size);

    	printf("Sorted array: ");
    	printArray(numbers, size);


    	free(numbers);

    	return 0;
}