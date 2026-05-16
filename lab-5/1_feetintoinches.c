#include<stdio.h>
void main(){
    float inches,feets;

    printf("Enter value of feets : ");
    scanf("%f", &feets);

    inches=feets*12;

    printf("%.2f", inches);

}