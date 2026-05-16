#include <stdio.h>

void main() {
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n]; 

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) { 
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 "); 
            }
        }
        printf("\n"); 
    }
}
