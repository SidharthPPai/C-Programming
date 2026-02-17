////////////////////////////////////////////////////////////////////
// 6. C program to find teh array of sum
//-----------------------------------------------------------------
//
// g++ Arrsumfn -o arr
// arr 8 9 1 2 3 7



#include <stdio.h>
#include <stdlib.h>


int sumarr(int arr[] , int size){


	int sum = 0;
	for(int i = 0 ; i < size ; i++){
		
		sum += arr[i];

	}

	return sum;
}
int main(int argc,char*argv[]){


	if(argc<2){

		printf("Command line error \n");
		return -1;
	}

	int size = argc-1;
	int *numbers = (int *)malloc(size * sizeof(int));


	for (int i = 0; i < size; i++){

		numbers[i] = atoi(argv[i+1]);

	}

	int totalsum = sumarr(numbers,size);

	printf("Sum is : %d\n",totalsum);

	free(numbers);

	return 0;
}