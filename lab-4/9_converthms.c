#include <stdio.h>

void main() {
    int total_seconds;
    
    printf("Enter the number of seconds: ");
    scanf("%d", &total_seconds);
    
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;
    
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
}