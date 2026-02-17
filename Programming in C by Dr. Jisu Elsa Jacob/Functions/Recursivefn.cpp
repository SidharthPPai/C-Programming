/////////////////////////////////////////////////////////////////////////
// 8. C program to find factorial of a number of a number using Recursion
//----------------------------------------------------------------------
//
// g++ Recursivefn.cpp -o rec
// rec 10


#include <stdio.h>
#include <stdlib.h>

int factorial(int n){


	if (n == 0 || n == 1){

		return 1;

	}


	return n * factorial(n-1);

}

int main(int argc , char **argv){

	if(argc < 2){

		printf("Command line error");
		return -1;

	}

	int d = atoi(argv[1]);

	int res = factorial(d);
	

	printf("Factorial of %d is : %d",d,res);


	return 0;

}