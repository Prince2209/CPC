#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;
    int *numbers;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    numbers = (int *)calloc(n, sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i]; 
    }

    printf("The sum of the entered numbers is: %d\n", sum);

    free(numbers);

}
