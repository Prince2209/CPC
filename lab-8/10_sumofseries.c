#include <stdio.h>

void main() {
    int n, i = 1, sum = 0;

    printf("Enter the range of number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i * i; 
        i++; 
    }

    printf("The sum of the series = %d\n", sum);

}
