// Write a program to concatenate two strings using pointers without using any built-in string functions."
#include <stdio.h>

void concatStrings(char *dest, const char *src) {
    // Move the pointer to the end of the destination string
    while (*dest) {
        dest++;
    }
    
    // Copy the source string to the end of the destination string
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    
    // Terminate the concatenated string with a null character
    *dest = '\0';
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    concatStrings(str1, str2);
    
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}
