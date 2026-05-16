#include <stdio.h>

int removeDuplicates(int* nums, int n) {
    if (n == 0) return 0; 

    int uniqueCount = 1; 

    for (int i = 1; i < n; i++) {
    
        if (nums[i] != nums[uniqueCount - 1]) {
            nums[uniqueCount] = nums[i]; 
            uniqueCount++; 
        }
    }
    
    return uniqueCount; 
}

void main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]); 

    int uniqueCount = removeDuplicates(nums, n);

    printf("Number of unique elements: %d\n", uniqueCount);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", nums[i]); 
    }
    printf("\n");

}
