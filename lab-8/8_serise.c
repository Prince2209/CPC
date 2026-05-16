#include <stdio.h>

void main() {
    int count = 0;
    int num = 1;

    while (count < 50) {
        printf("%d ", num);
        num += 3; 
        count++;
    }

}
