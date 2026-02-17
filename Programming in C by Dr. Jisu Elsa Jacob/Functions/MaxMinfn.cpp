////////////////////////////////////////////////////////////////////
// 7. C program to find the Max and Min value of an array
//-----------------------------------------------------------------
//
// g++ MaxMinfn -o max
// max 9 8 12 16 1 2 10


#include <stdio.h>
#include <stdlib.h>
void findMinMax(int arr[] , int size)
{


	int min , max ;
	min = arr[0];
	max = arr[0];

	for (int i = 1 ; i < size ; i++)
	{

		if (arr[i] < min)
		   min = arr[i];
		if (arr[i] > max)
		   max = arr[i];
	}

	printf("Minimum element : %d\n",min);
	printf("Maximum element : %d\n",max);
}

int main(int argc , char *argv[]){


	if (argc < 2){

		printf("Command line error");
		return -1;
	}

	int size = argc - 1;

	int *numbers = (int *)malloc(size * sizeof(int));


	for (int i = 0; i < size; i++){

		numbers[i] = atoi(argv[i+1]);

	}

	findMinMax(numbers,size);

	return 0;


}	