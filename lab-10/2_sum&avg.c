#include <stdio.h>

void main() {
    
    int num, count = 0;
    float sum = 0, average;
    
    printf("Enter numbers (enter a negative number to stop): \n");
    
    while (1) {
        scanf("%d", &num);
        
        if (num < 0)
            break;
        
        sum += num;
        count++;
    }
    
    if (count > 0) {
        
        average = sum / count;
        

        printf("Sum: %.2f\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }
    
}
