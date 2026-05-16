#include <stdio.h>

void main() {
    int number;
    int lastDigit;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }

    if (lastDigit % 2 == 0) {
        printf("The last digit of %d is even.\n", number);
    } else {
        printf("The last digit of %d is odd.\n", number);
    }

}
