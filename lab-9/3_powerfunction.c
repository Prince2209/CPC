#include <stdio.h>

void main() {
    int base, exp, result = 1; 
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exp);
    
    while (exp > 0) {
        result = result * base;
        exp--; 
    }
    
    printf("Result: %d\n", result);
    
}
