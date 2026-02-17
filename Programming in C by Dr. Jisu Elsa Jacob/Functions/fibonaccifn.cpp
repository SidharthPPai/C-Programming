///////////////////////////////////////////////////////////////////////
// 9. C program to find fibonacci of a number using Recursive Function
//--------------------------------------------------------------------
//
// g++ fibonnacifn -o fib
// fib 10


#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){

            
	if (n==1)
		return 0;
	else if (n==2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);

}

int main(int argc , char **argv){



	if(argc < 2){

		printf("Command line error");
		return -1;

	}

	int n = atoi(argv[1]);

	int fibterm = fibonacci(n);

	printf("Fibonacci of %d is : %d",n,fibterm);

	return 0;
}