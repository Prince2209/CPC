#include <stdio.h>

void main() {
    int height[5], weight[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter height (in cm) of person %d: ", i + 1);
        scanf("%d", &height[i]);
        
        printf("Enter weight (in kg) of person %d: ", i + 1);
        scanf("%d", &weight[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (height[i] > 170 && weight[i] < 50) {
            count++;
        }
    }

    printf("Number of people with height > 170 cm and weight < 50 kg: %d\n", count);
}
