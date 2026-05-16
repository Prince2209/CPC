#include <stdio.h>

void main() {
    int n, totalSum = 0,i,j;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int currentSum = 0;
        
        for (j = 1; j <= i; j++) {
            currentSum += j; 
        }
        
        totalSum += currentSum; 
    }

    printf("The sum of the series is: %d\n", totalSum);
}
