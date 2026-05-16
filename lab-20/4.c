#include <stdio.h>

int myStrlen(const char *str) {
    int length = 0;
    while (*str != '\0') { 
        length++; 
        str++; 
    }
    return length; 
}

void myStrcpy(char *destination, const char *source) {
    while (*source != '\0') { 
        *destination = *source; 
        destination++; 
        source++; 
    }
    *destination = '\0'; 
}

int myStrcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') { 
        if (*str1 != *str2) { 
            return (*str1 - *str2); 
        }
        str1++; 
        str2++; 
    }
    return (*str1 - *str2);
}

void main() {
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    source[strcspn(source, "\n")] = 0;

    int length = myStrlen(source);
    printf("Length of the string: %d\n", length);

    myStrcpy(destination, source);
    printf("Copied string: %s\n", destination);

    int cmpResult = myStrcmp(source, destination);
    if (cmpResult == 0) {
        printf("Strings are equal.\n");
    } else if (cmpResult < 0) {
        printf("Source is less than destination.\n");
    } else {
        printf("Source is greater than destination.\n");
    }

}
