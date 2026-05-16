#include <stdio.h>

void main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array1[n], array2[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < n; i++) {
        array2[i] = array1[i];
    }

    printf("\nElements in the second array (copied from first array):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }
}
