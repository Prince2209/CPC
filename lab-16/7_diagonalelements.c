#include <stdio.h>

void main() {
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n]; 
    int sum = 0;      

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i];         
    }

    printf("\nSum of diagonal elements: %d\n", sum);

}
