#include <stdio.h>

void main() {
    int n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);

        if (array[i] % 3 == 0) {
            count++;
        }
    }

    printf("\nTotal number of elements divisible by 3: %d\n", count);
}
