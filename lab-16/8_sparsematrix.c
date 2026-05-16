#include <stdio.h>

void main() {
    int rows, cols;
    int zeroCount = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; 

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
           
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    int totalElements = rows * cols;

    if (zeroCount > totalElements / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

}
