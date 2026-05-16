#include <stdio.h>

float findMax(float a, float b, float c) {
    float max = a; 

    if (b > max) {
        max = b; 
    }
    if (c > max) {
        max = c; 
    }

    return max; 
}

void main() {
    float num1, num2, num3;

    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    float max = findMax(num1, num2, num3);

    printf("The maximum of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, max);

}
