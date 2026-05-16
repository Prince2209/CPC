#include<stdio.h>
void main(){

    int a,b;

    printf("Enter a value of a and b: ");
    scanf(" %d %d", &a, &b);

    (a^b)? printf("a is not equal to b"): printf("a is eqaul to b");

}