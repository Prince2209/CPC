#include <stdio.h>

void main() {
    int num, i = 2, flag = 1;  

    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        flag = 0; 
    } else {
        
        while (i * i <= num) {
            if (num % i == 0) {
                flag = 0;  
                break;
            }
            i++;
        }
    }

    if (flag == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

}
