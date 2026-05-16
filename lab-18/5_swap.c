#include <stdio.h>

void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping in swapByValue: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp;
    temp = *a; 
    *a = *b;   
    *b = temp; 
    printf("After swapping in swapByReference: *a = %d, *b = %d\n", *a, *b);
}

void main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapByValue: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapByValue: num1 = %d, num2 = %d (remains unchanged)\n\n", num1, num2);

    printf("Before swapByReference: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2); 
    printf("After swapByReference: num1 = %d, num2 = %d (changed)\n", num1, num2);

}
