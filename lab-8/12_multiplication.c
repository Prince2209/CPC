#include <stdio.h>

void main() {
    int num1, num2, product = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num2 < 0) {
        num1 = -num1;
        num2 = -num2;
    }

    while (num2 > 0) {
        product += num1; 
        num2--; 
    }

    printf("Product = %d\n", product);

}
