#include <stdio.h>

void main() {
    int matrix[3][3];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the values for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > 0) {
                positiveCount++;
            } else if (matrix[i][j] < 0) {
                negativeCount++;
            } else {
                zeroCount++;
            }
        }
    }

    printf("\nCount of Positive elements: %d\n", positiveCount);
    printf("Count of Negative elements: %d\n", negativeCount);
    printf("Count of Zero elements: %d\n", zeroCount);

}
