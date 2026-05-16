#include <stdio.h>

void main() {
    
    int num, first_digit, last_digit, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    last_digit = num % 10;
    
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    
    sum = first_digit + last_digit;
    
    printf("Sum of first and last digit: %d\n", sum);
    
}
