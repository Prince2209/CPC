#include <stdio.h>

void main() {
    int n;
    int max, min, sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
        
        if (i == 0) {
            max = min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    avg = (float)sum / n;

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

}
