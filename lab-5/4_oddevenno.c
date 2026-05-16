#include<stdio.h>

void main(){

    int x;
    printf("Enter a value of x : ");
    scanf("%d" , &x);

    if (x%2==0){
        printf("Number is even");
    }
    else{
        printf("NUmber is odd");
    }
}