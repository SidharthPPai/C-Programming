#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main(int argc, char *argv[]) {
   
    if (argc != 4) {
        printf("Usage: %s <name> <age> <grade>\n", argv[0]);
        return 1;
    }

    struct Student s1;

   
    snprintf(s1.name, sizeof(s1.name), "%s", argv[1]);


    s1.age = atoi(argv[2]);   
    s1.grade = atof(argv[3]);  

    
    printf("\n--- Student Record ---\n");
    printf("Name:  %s\n", s1.name);
    printf("Age:   %d\n", s1.age);
    printf("Grade: %.2f\n", s1.grade);

    return 0;
}