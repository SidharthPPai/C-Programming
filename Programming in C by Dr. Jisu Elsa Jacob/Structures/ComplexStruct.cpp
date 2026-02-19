#include <stdio.h>
#include <stdlib.h>

struct Complex {

	double real;
	double imag;

};

int main(int argc,char *argv[]){


	if (argc != 5){

		printf("Command line error");
		return 1;
	}


	struct Complex n1,n2,sum;

	n1.real = atof(argv[1]);
	n1.imag = atof(argv[2]);
	n2.real = atof(argv[3]);
	n2.imag = atof(argv[4]);

	sum.real = n1.real + n2.real;
	sum.imag = n1.imag + n2.imag;

	printf("Sum %.2lf + %.2lfi\n",sum.real,sum.imag);

	return 0;
}