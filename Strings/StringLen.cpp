#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strlength(char* source) {

	int count = 0;

	while(*source != 0){
		count++;
		source++;
	}
	return count;	
}


int main(int argc,char *argv[]) {
	if(argc < 2) {
		printf("Command line error \n");
		return -1;
	}

	int Length = strlength(argv[1]);

	printf("The Length of Strings is  : %d\n ",Length);

	return 0;
}
