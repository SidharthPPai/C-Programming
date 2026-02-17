////////////////////////////////////////////////////////////////////
// 6. C program to find power of a number using recursive function
//-----------------------------------------------------------------
//
// g++ Powerfn.cpp -o power
// power 2 3

#include <stdio.h>
#include <stdlib.h>

double recursivePower(double base , int exponents){

	if(exponents == 0){

		return 1;

	}

	return base * recursivePower(base,exponents - 1);

}


int main(int argc,char **argv){


	if (argc < 2){


		printf("Command line error");
		return -1;

	}

	int number1 = atoi(argv[1]);
	int exp = atoi(argv[2]);
	
	int result = recursivePower(number1,exp);

	printf("The Recursive power is : %d\n",result);

	return 0;
}