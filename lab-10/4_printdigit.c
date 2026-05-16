#include <stdio.h>

void main() {
    
    int num, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of the number: \n");
    
    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        printf("0\n");
    }

    while (num > 0) {
        digit = num % 10;  
        printf("%d\n", digit);  
        num /= 10;  
    }

}
