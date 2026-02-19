#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    int rollNumber;
};

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Command line error\n");
        return -1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("Please enter a valid number of students greater than 0.\n");
        return -1;
    }

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEntering details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
    }

    printf("\n--- Displaying All Student Records ---\n");
    printf("%-20s %-10s %-10s\n", "Name", "Age", "Roll No");
    printf("----------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %-10d\n", 
               students[i].name, 
               students[i].age, 
               students[i].rollNumber);
    }

    free(students);

    return 0;
}






