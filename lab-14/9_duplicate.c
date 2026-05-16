#include <stdio.h>

void main() {
    int n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], visited[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;  
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;  
        }
        
        int duplicateCount = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                visited[j] = 1;  
            }
        }
        
        if (duplicateCount > 0) {
            count++;
        }
    }

    printf("Total duplicate elements: %d\n", count);

}
