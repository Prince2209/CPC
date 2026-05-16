#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for int
    int *intPtr = (int *)malloc(sizeof(int));
    if (intPtr == NULL) {
        printf("Memory allocation failed for int.\n");
        return 1;
    }
    *intPtr = 10; // Assign value
    printf("Integer value: %d\n", *intPtr);

    // Allocate memory for char
    char *charPtr = (char *)malloc(sizeof(char));
    if (charPtr == NULL) {
        printf("Memory allocation failed for char.\n");
        free(intPtr); // Deallocate previously allocated memory
        return 1;
    }
    *charPtr = 'A'; // Assign value
    printf("Character value: %c\n", *charPtr);

    // Allocate memory for float
    float *floatPtr = (float *)malloc(sizeof(float));
    if (floatPtr == NULL) {
        printf("Memory allocation failed for float.\n");
        free(intPtr); // Deallocate previously allocated memory
        free(charPtr); // Deallocate previously allocated memory
        return 1;
    }
    *floatPtr = 5.75; // Assign value
    printf("Float value: %.2f\n", *floatPtr);

    // Deallocate memory
    free(intPtr);
    free(charPtr);
    free(floatPtr);

    return 0;
}
