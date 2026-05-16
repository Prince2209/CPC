#include <stdio.h>
#include <time.h>

void main() {

    time_t currentTime;
    
    time(&currentTime);
    
    char* timeString = ctime(&currentTime);
    
    printf("Current Date and Time: %s", timeString);
    
}
