#include <stdlib.h>

void main() {
    char ch;
    printf("Are you sure you want to turn off your computer now? (y/n)\n");
    scanf("%c", &ch);
    
    if (tolower(ch) == 'y') {
        system("C:\\WINDOWS\\System32\\shutdown /s");
    }
}