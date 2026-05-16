#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void toLowerCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

void toUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

void main() {
    char str1[100], str2[100], str3[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    
    printf("Length of first string (strlen): %lu\n", strlen(str1));
    printf("Length of second string (strlen): %lu\n", strlen(str2));

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal (strcmp).\n");
    } else {
        printf("Strings are not equal (strcmp).\n");
    }

    strcpy(str3, str1);
    printf("Copy of first string into str3 (strcpy): %s\n", str3);

    strcat(str1, str2);
    printf("Concatenation of first and second strings (strcat): %s\n", str1);

    reverseString(str1);
    printf("Reversed string (strrev or custom): %s\n", str1);

    toLowerCase(str1);
    printf("Lowercase version (strlwr or custom): %s\n", str1);

    toUpperCase(str1);
    printf("Uppercase version (strupr or custom): %s\n", str1);

}
