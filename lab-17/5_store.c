#include <stdio.h>

void main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; 
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int *ptr = arr; 
    
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

}
