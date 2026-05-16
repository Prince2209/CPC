#include <stdio.h>

void main()
{
    int i,a, b;

    printf("enter a and b :");
    scanf("%d %d", &a, &b);

    i=a+1;

    while (i<b)
    {

        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}