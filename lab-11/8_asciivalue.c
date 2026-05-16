#include <stdio.h>

void main() {
    int i;

    printf("ASCII characters and their values:\n");
    
    for (i = 0; i < 256; i++) {
        printf("ASCII value of %c = %d\n", i, i); 
    }
}
