#include <stdio.h>
#include <string.h>

// Function to calculate average length of given strings from Command line

double findAverage(int count,char *arr[]){

	int totalLen = 0;


	for (int i = 0; i < count;i++){

		totalLen +=strlen(arr[i]);

	}

	return (double) totalLen / count;
}

int main(int argc,char *argv[]){

	// Check if atleast one string is entered
	if (argc < 2){

		printf("Command line error\n");
		return -1;

	}


	// argc includes program name , so actual string count = argc -1
	int StringCount = argc - 1;

	double average = findAverage(StringCount,&argv[1]);


	printf("Number of strings : %d\n",StringCount);
	printf("Average length of strings : %.2f\n",average);

	return 0;

}
