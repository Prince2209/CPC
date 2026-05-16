#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int n) {
    for (int i = 0; i < n; i++) {
        int temp = *(arr1 + i);    
        *(arr1 + i) = *(arr2 + i); 
        *(arr2 + i) = temp;        
    }
}

void main() {
    int n;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    swapArrays(arr1, arr2, n);

    printf("\nAfter swapping:\n");
    printf("First array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

}
