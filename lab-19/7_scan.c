#include <stdio.h>
#include <ctype.h>

void toUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

void main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toUppercase(str);

    printf("Uppercase string: %s", str);

}
