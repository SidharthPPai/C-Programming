////////////////////////////////////////////////////////////////////
// 2. Simple C program to find factorial of a number 
//-----------------------------------------------------------------
//
// g++ Factorialfn.cpp -o fact
// fact 8  

#include <stdio.h>
#include <stdlib.h>

int factorial(int n); // Function prototype declares the function as it is declared before defined

int main(int argc , char **argv){


	//defensive coding
	if (argc != 2){	

		printf("Command line error\n");
		return -1;
	}

	int num = atoi(argv[1]);

	int result = factorial(num);
	printf("Factorial of %d is %d",num,result);

} 

int factorial(int a){


	int fact = 1;

	// Handle special case of 0 factorial

	if (a == 0){

		return 1;
	}

	// Calculate factorial using loop
	for(int i = 1; i <= a; i++){

		fact = fact * i;
	
	}

	return fact;
}