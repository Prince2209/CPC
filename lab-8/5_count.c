#include <stdio.h>

void main()
{

    int number, i = 1, oddcount = 0, evencount = 0;

    printf("enter 10 numbers : ");

    while (i <= 10)
    {

        scanf("%d", &number);

        if (number % 2 == 0)
        {
            evencount = evencount + 1;
        }
        else {
            oddcount++;
            
        }
        i++;
    }
    printf("evencount=%d\n",evencount);
    printf("oddcount=%d\n",oddcount);

}