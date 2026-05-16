#include <stdio.h>
#include <string.h>

void main() {
    char str[100], ch;
    int found = 0;

    printf("Enter a string: ");
    gets(str);  

    printf("Enter a character to find: ");
    scanf("%c", &ch);  

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at position %d.\n", ch, i + 1);
            found = 1;
            break;  
        }
    }

    if (!found) {
        printf("Character '%c' not found in the string.\n", ch);
    }

}
