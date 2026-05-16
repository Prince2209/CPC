#include <stdio.h>

void main() {
    int n, positiveCount = 0, negativeCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);

}
