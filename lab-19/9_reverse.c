#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    else
        return reverseNumber(num / 10, rev * 10 + num % 10);
}

void main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = reverseNumber(num, 0);

    printf("Reversed number: %d\n", reversed);

}
