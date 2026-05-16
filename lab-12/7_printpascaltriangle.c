#include <stdio.h>

void main() {
    int n; 

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int value = 1; 

        for (int space = 0; space < n - i - 1; space++) {
            printf(" "); 
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", value); 
            
            value = value * (i - j) / (j + 1); 
        }

        printf("\n");
    }
}
