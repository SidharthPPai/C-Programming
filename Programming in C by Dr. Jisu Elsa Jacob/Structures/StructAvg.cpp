#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{

	char name[50];
	int age;
	float marks[3];;

};

int main(int argc , char **argv)
{


	if(argc < 6){

		printf("Command line error");
		return -1;

	}

	struct Student s1;

	snprintf(s1.name, sizeof(s1.name), "%s", argv[1]);


	s1.age = atoi(argv[2]);
	
	s1.marks[0] = atof(argv[3]);
    	s1.marks[1] = atof(argv[4]);
    	s1.marks[2] = atof(argv[5]);
	
	float sum = 0.0;

	for (int i = 0; i < 3;i++)
	{


		sum += s1.marks[i];


	}

	float avg = sum / 3.0;

	printf("\n--- Student Record ---\n");
    	printf("Name:  %s\n", s1.name);
    	printf("Age:   %d\n", s1.age);
	printf("Average Marks : %.2f\n",avg);

	return 0;

}