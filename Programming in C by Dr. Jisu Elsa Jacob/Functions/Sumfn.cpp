////////////////////////////////////////////////////////////////////
// 1. A simple program to find the sum of two numbers using function
//-----------------------------------------------------------------
//
// g++ Sumfn.cpp -o sum
// sum 8 9 

#include <stdio.h>
#include <stdlib.h>
int add(int,int); 
int main(int argc,char **argv){


	if(argc!=3){ 
		printf("Command line error\n");
		return 0;
	}


	int n1 = atoi(argv[1]);
	
	int n2 = atoi(argv[2]);

	int result = add(n1,n2);
	printf("The sum is : %d\n",result );
	return 0;
}
int add(int a, int b){

	return a+b;


}
