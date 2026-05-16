#include <stdio.h>

void main() {
    int i = 10;
    float f = 5.5f;
    double d = 15.25;
    char c = 'A';

    int *intPtr = &i;        
    float *floatPtr = &f;    
    double *doublePtr = &d;  
    char *charPtr = &c;      

    printf("Value of i: %d\n", *intPtr);
    printf("Address of i: %p\n\n", (void*)intPtr);

    printf("Value of f: %f\n", *floatPtr);
    printf("Address of f: %p\n\n", (void*)floatPtr);

    printf("Value of d: %lf\n", *doublePtr);
    printf("Address of d: %p\n\n", (void*)doublePtr);

    printf("Value of c: %c\n", *charPtr);
    printf("Address of c: %p\n\n", (void*)charPtr);

}
