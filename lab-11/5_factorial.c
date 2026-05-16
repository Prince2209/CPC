#include <stdio.h>
void main()
{
    int n, i = 1, factorial = 1;

    printf("enter number");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial=%d", factorial);
}