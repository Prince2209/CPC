#include<stdio.h>

void main(){
    int x,y;
    char choice;

    printf("Enter a value of x and y: ");
    scanf("%d",&x);
    scanf("%d",&y);

    scanf("%c", &choice);
    
    printf("Enter 1 for add: \n");
    printf("Enter 2 for sub: \n");
    printf("Enter 3 for mul: \n");
    printf("Enter 4 for div: \n");
    
    scanf("%c", &choice);

    if (choice=='1'){
        printf("The sum is =%d",x+y);
    }
    else if(choice=='2'){
        printf("The sub is =%d",x-y);
    }
    else if(choice=='3'){
        printf("The mul is =%d",x*y);
    }
    else if(choice=='4'){
        printf("The div is =%d",x/y);
    }
    else{
        printf("Ivalid Input: ");
    }
}