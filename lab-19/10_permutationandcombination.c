#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

void main() {
    int n, r;

    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Error: n must be greater than or equal to r.\n");
        return 1; 
    }

    long long combinations = nCr(n, r);
    long long permutations = nPr(n, r);

    printf("nCr (%dC%d) = %lld\n", n, r, combinations);
    printf("nPr (%dP%d) = %lld\n", n, r, permutations);

}
