#include <stdio.h>

void replaceCharacter(char *str, char find, char replace) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == find) {
            str[i] = replace;
        }
    }
}

void main() {
    char str[100];
    char find, replace;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find: ");
    scanf(" %c", &find);

    printf("Enter the replacement character: ");
    scanf(" %c", &replace);

    replaceCharacter(str, find, replace);

    printf("Modified string: %s", str);

}
