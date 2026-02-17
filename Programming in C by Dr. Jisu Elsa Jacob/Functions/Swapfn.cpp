////////////////////////////////////////////////////////////////////
// 3. Simple C program to swap two numbers
//-----------------------------------------------------------------
//
// g++ Swapfn.cpp -o swap
// swap 10 20 


#include <stdio.h>
#include <stdlib.h>

void Swap(int *x, int *y)
{


	int temp = *x;
	*x = *y;
	*y = temp;

}

int main(int argc , char **argv){


	if (argc != 3){

		printf("Command line error ");
		return -1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);	

	printf("Numbers before the swap a=%d , b=%d \n",a,b);
	Swap(&a,&b);
	printf("Numbers after the swap a=%d , b=%d \n",a,b);

	return 0;

}