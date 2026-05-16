#include <stdio.h>

void main() {
    int n, searchElement, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for (int i = 0; i < n; i++) {
        if (array[i] == searchElement) {
            printf("Element %d found at position %d\n", searchElement, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }
}
