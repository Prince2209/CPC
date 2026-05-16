#include <stdio.h>

int removeElement(int *nums, int n, int val) {
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        
        if (nums[i] != val) {
            
            nums[newSize] = nums[i];
            newSize++;  
        }
    }

    return newSize; 
}

void main() {
    int n, val;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    int newSize = removeElement(nums, n, val);

    printf("\nArray after removing %d:\n", val);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nNumber of elements not equal to %d: %d\n", val, newSize);

}
