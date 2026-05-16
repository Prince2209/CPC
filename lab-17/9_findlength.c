#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str; 
    int length = 0;

    while (*ptr != '\0') {
        length++;        
        ptr++;          
    }

    return length;       
}

void main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int len = stringLength(str);

    printf("Length of the string: %d\n", len);

}
