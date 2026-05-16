#include <stdio.h>
void main()
{
    int power, base, i, j, result = 1;
    
    printf("enter tha power:");
    scanf("%d", &power);

    printf("enter tha base:");
    scanf("%d", &base);

    for (i = 0; i < power; i++)
    {
        int temp = 0;
        for (j = 0; j < result; j++)
        {
            temp = temp + base;
        }
        result = temp;
    }
    printf("%d", result);
}