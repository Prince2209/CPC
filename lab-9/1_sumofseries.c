#include<stdio.h>
void main(){
    int number,i=1,sum=0,sum_odd=0,sum_even=0;

    printf("enter number");
    scanf("%d",&number);

    while(i<=number){
        if(i%2==0){
            sum_even=sum_even+i;
        }
        else{
            sum_odd=sum_odd+i;
        }
        i++;
    }

    sum=sum_odd-sum_even;
    printf("sum=%d",sum);
}