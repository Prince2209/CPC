#include <stdio.h>

void main() {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum = *ptr1 + *ptr2;

    printf("Value of num1: %d\n", *ptr1);
    printf("Value of num2: %d\n", *ptr2);
    printf("Sum of num1 and num2: %d\n", sum);

}
