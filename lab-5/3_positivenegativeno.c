#include<stdio.h>

void main(){
    int x;

    printf("Enter a value of x : ");
    scanf("%d" , &x);

    if (x>0){
        printf("Number is positive");
    }
    else if (x<0){
        printf("Number is negative");
    }
    else {
        printf("Number is zero");
    }
}