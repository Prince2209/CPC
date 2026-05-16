#include <stdio.h>

void fbbo(int N) {
    int a = 0, b = 1, next;

    if (N < 1) {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci series up to %d: ", N);
    
    if (N >= 1) {
        printf("%d ", a);
    }
    if (N >= 2) {
        printf("%d ", b);
    }

    next = a + b;
    while (next <= N) {
        printf("%d ", next);
        a = b;       
        b = next;    
        next = a + b; 
    }
    
    printf("\n");
}

void main() {
    int N;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    fibbo(N);

}
