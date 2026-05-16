#include <stdio.h>
void main()
{
    int number, i, n;

    printf("enter number");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", number, i, number * i);
    }
}