#include <stdio.h>

void main() {
    int dividend, divisor, quotient = 0, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor > dividend) {
        
        int temp = dividend;
        dividend = divisor;
        divisor = temp;
    }

    remainder = dividend;

    while (remainder >= divisor) {
        remainder -= divisor;
        quotient++;
    }

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

}
