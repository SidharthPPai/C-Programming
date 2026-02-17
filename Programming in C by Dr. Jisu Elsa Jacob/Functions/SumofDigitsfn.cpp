////////////////////////////////////////////////////////////////////
// 4. Simple C program to find the sum of digits
//-----------------------------------------------------------------
//
// g++ SumofDigitsfn -o sumdigi
// sumdigi 375

#include <stdio.h>
#include <stdlib.h>
int sum_of_digits(int num)
{


	int sum = 0;
	while(num > 0){

		sum += num % 10; // Add the last digit of the sum
		num /=10;	// remove the last digits

	}
	return sum;

}

int main(int argc,char **argv){


	if(argc != 2){

		printf("Command line error \n");
		return -1;

	}

	int number = atoi(argv[1]);
	
	if (number < 0){

		printf("Please enter a +ve number");
		return 0;
	}

	// Calculate and display the sum of digits
	int result = sum_of_digits(number);
	printf("The sum of digits %d is %d",number,result);
	return 0;
}