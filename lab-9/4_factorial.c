#include<stdio.h>
void main(){
    int number,i=1,factorial=1;

    printf("enter number");
    scanf("%d",&number);

    while(i<=number){
        factorial=factorial*i;
        i++;
    }
    printf("factorial=%d",factorial);
}