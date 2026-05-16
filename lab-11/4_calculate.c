#include <stdio.h>

void main()
{
    int base, i, exp, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (i = 1; i<=exp; i++)
    {
        result = result * base;
    }

    printf("Result: %d\n", result);
}
