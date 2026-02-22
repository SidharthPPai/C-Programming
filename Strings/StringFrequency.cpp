#include <stdio.h>
#include <string.h>
#include <ctype.h>


void countEveryLetter(int count, char *arr[]) {
    int alphabet[26] = {0};
    int totalCharacters = 0;

    for (int i = 0; i < count; i++) {
        char *currentString = arr[i];
        for (int j = 0; currentString[j] != '\0'; j++) {
            // Convert to lowercase to count 'A' and 'a' together
            char c = tolower((unsigned char)currentString[j]);
            
            if (c >= 'a' && c <= 'z') {
                alphabet[c - 'a']++; 
                totalCharacters++;
            }
        }
    }

    printf("\n--- Letter Frequency ---\n");
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > 0) {
            printf("%c: %d\n", i + 'a', alphabet[i]);
        }
    }
    printf("Total letters found: %d\n", totalCharacters);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ...\n", argv[0]);
        return -1;
    }

    int stringCount = argc - 1;

    countEveryLetter(stringCount, &argv[1]);

    return 0;
}
