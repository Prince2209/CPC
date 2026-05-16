#include <stdio.h>

void main() {
    int n, min, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers (in increasing order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[n - 1];

    printf("Missing numbers in the sequence are: ");
    int index = 0;  

    for (int i = min; i <= max; i++) {
        if (arr[index] != i) {
            printf("%d ", i);
        } else {
            index++;  
        }
    }
    printf("\n");

}
