#include <stdio.h>

void copyString(char *source, char *destination) {
    while (*source != '\0') { 
        *destination = *source; 
        source++; 
        destination++; 
    }
    *destination = '\0'; 
}

void main() {
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    source[strcspn(source, "\n")] = 0;

    copyString(source, destination);

    printf("Copied string: %s\n", destination);

}
