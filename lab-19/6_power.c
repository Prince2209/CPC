#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1;  
    else
        return base * power(base, exp - 1);  
}

void main() {
    int base, exp, result;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exp);

    result = power(base, exp);

    printf("%d^%d = %d\n", base, exp, result);

}
