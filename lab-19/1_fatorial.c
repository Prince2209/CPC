#include <stdio.h>

int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


int factorial_recursive(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    printf("Factorial of %d (using iterative function) is: %d\n", number, factorial_iterative(number));

    
    printf("Factorial of %d (using recursive function) is: %d\n", number, factorial_recursive(number));

}
