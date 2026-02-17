////////////////////////////////////////////////////////////////////
// 6. C program to find wether a string is Palindrome or not
//-----------------------------------------------------------------
//
// g++ Palindromfn -o pal
// pal Malayalam


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return -1;
    }

    if (isPalindrome(argv[1])) {
        printf("'%s' IS a palindrome.\n", argv[1]);
    } else {
        
        printf("'%s' is NOT a palindrome.\n", argv[1]);
    }

    return 0;
}