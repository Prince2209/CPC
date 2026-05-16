#include <stdio.h>

void main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number in reverse order: ");

    if (num < 0) {
        printf("-");
        num = -num;
    }

    
    if (num == 0) {
        printf("0");
    }

    
    while (num > 0) {
        digit = num % 10;  
        printf("%d", digit);  
        num /= 10;  
    }

    printf("\n");
    
}
