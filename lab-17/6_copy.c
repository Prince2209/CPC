#include <stdio.h>

void main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int source[n], destination[n];

    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }

    int *srcPtr = source;
    int *destPtr = destination;

    for (int i = 0; i < n; i++) {
        *(destPtr + i) = *(srcPtr + i); 
    }

    printf("Elements in the destination array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

}
