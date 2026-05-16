#include<stdio.h>
void main(){
    int number,i=1;

    printf("enter number");
    scanf("%d",&number);

    while(i<=number){
        if(number%i==0){
            printf("%d,",i);
        }
        i++;
    }
}