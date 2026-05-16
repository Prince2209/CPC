#include <stdio.h>

void main() {
    int num1, num2, hcf, lcm, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    hcf = a; 
   
    lcm = (num1 * num2) / hcf;

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

}
