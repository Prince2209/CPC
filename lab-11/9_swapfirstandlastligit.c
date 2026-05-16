#include <stdio.h>

void main() {
    int number, firstDigit, lastDigit, swappedNumber = 0, temp, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number; 
    lastDigit = number % 10; 

    for (firstDigit = temp; firstDigit >= 10; firstDigit /= 10) {
        multiplier *= 10; 
    }

    swappedNumber = lastDigit * multiplier; 
    swappedNumber += number % multiplier / 10 * 10;
    swappedNumber += firstDigit; 

    printf("Number after swapping first and last digits: %d\n", swappedNumber);

}
