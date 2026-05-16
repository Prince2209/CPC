#include <stdio.h>

void main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int array[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int firstMax = array[0];
    int secondMax = array[1];

    if (secondMax > firstMax) {
        int temp = firstMax;
        firstMax = secondMax;
        secondMax = temp;
    }

    for (int i = 2; i < n; i++) {
        if (array[i] > firstMax) {
            secondMax = firstMax;
            firstMax = array[i];
        } else if (array[i] > secondMax && array[i] != firstMax) {
            secondMax = array[i];
        }
    }

    printf("\nThe two largest elements are %d and %d\n", firstMax, secondMax);

}
