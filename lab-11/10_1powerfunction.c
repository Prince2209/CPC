#include <stdio.h>

void main() {
    int number, firstDigit, lastDigit, temp, digitsCount = 0;
    int divisor = 1, swappedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number; 
    lastDigit = number % 10; 

    while (temp != 0) {
        temp /= 10;
        digitsCount++;
    }

    for (int i = 1; i < digitsCount; i++) {
        divisor *= 10; 
    }

    firstDigit = number / divisor; 

    temp = number % divisor; 
    temp = temp / 10; 

    
    swappedNumber = lastDigit; 
    for (int i = 1; i < digitsCount; i++) {
        swappedNumber *= 10; 
    }
    swappedNumber += temp * 10 + firstDigit; 

    
    printf("Number after swapping first and last digits: %d\n", swappedNumber);
    
}
