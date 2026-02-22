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

void toUpper(char* source) {

	
	int strlen = strlength(source);

	for (int i = 0; i < strlen; i++) {
	
		char temp = *source;

		if (temp>='A' && temp <= 'Z'){


			printf("%c\t , %d\n",temp,temp);
			*source += 32;

		}
		source++;	

	}
}


int main(int argc,char *argv[]) {
	if(argc < 2) {
		printf("Command line error \n");
		return -1;
	}

	toUpper(argv[1]);
	printf("The Strings is  : %s\n ",argv[1]);

	return 0;
}
