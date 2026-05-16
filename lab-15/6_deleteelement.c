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

    int newSize = n;
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (array[i] == array[j]) {
                
                for (int k = j; k < newSize - 1; k++) {
                    array[k] = array[k + 1];
                }
                newSize--;  
                j--;        
            }
        }
    }

    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
}
