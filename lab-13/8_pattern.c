#include <stdio.h>

void main() {
    int i, j;
    char ch;

    for (i = 1; i <= 5; i++) {
        if (i % 2 != 0) { 
            for (j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {  
            ch = 'A';  
            for (j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;  
            }
        }
        printf("\n"); 
    }
}
