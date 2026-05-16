#include <stdio.h>

void main() {
    int n, newValue, pos;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int array[n + 1]; 

    printf("Enter %d sorted elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);

    pos = n;
    for (int i = 0; i < n; i++) {
        if (array[i] > newValue) {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--) {
        array[i] = array[i - 1];
    }

    array[pos] = newValue;

    printf("\nArray after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", array[i]);
    }

}
