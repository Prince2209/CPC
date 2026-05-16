#include <stdio.h>
#include <ctype.h>

void removeSpacesAndSpecialChars(char *str) {
    char *ptr = str; 
    char *result = str; 

    while (*ptr != '\0') {
        
        if (isalnum((unsigned char)*ptr)) {
            *result = *ptr; 
            result++; 
        }
        ptr++; 
    }
    *result = '\0'; 
}

void main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeSpacesAndSpecialChars(str);

    printf("Modified string: %s\n", str);

}
