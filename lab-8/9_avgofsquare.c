#include <stdio.h>

void main() {
    int num = 0, count = 0, sum = 0;
    float average;

    while (count < 10) {
        num++;
        int square = num * num;

        if (square % 10 == 3) {
            sum += square;
            count++;
        }
    }

    average = sum / 10.0;

    printf("Sum of squares: %d\n", sum);
    printf("Average of squares: %.2f\n", average);

}
