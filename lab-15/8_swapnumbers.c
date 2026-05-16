#include <stdio.h>

void main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }

    printf("\nArray after swapping:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}
