#include <stdio.h>
#include <math.h>

void main() {
    int n;
    float sum = 0, product = 1, harmonicSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        
        sum += arr[i];                     
        product *= arr[i];                  
        harmonicSum += 1 / arr[i];          
    }

    float arithmeticMean = sum / n;
    float geometricMean = pow(product, 1.0 / n);
    float harmonicMean = n / harmonicSum;

    printf("Arithmetic Mean: %.2f\n", arithmeticMean);
    printf("Geometric Mean: %.2f\n", geometricMean);
    printf("Harmonic Mean: %.2f\n", harmonicMean);

}
