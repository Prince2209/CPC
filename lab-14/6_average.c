#include <stdio.h>

void main() {
    int n, count = 0;
    float sum = 0, avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }

    printf("Average of the array: %.2f\n", avg);
    printf("Number of elements greater than the average: %d\n", count);

}
