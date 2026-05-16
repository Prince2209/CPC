#include<stdio.h>
void main(){
    int number,i=1;

    printf("enter number");
    scanf("%d",&number);

    while(i<=10){
        printf("%d*%d=%d\n",number,i,number*i);
    i++;
}
}