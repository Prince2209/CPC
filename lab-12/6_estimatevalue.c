#include <stdio.h>

void main() {
    int n,i,j;
    double e = 1.0; 
    
    printf("Enter the number of terms to estimate e: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        double factorial = 1.0; 

        for (j = 1; j <= i; j++) {
            factorial *= j; 
        }

        e += 1.0 / factorial; 
    }

    printf("Estimated value of e after %d terms: %.10f\n", n, e);

}
