#include<stdio.h>

void main(){

    float marks[5];
    float totalmarks=0;
    float percentage;
    int i;

    printf("Enter marks for 5 subjects:\n");

    for(i=0;i<5;i++){
        printf("subject %d: ");
        scanf("%f", &marks[i]);

        if(marks[i]<0){
            printf("marks cannot be negative. please enter again.\n");

            i--;
        }else{
            totalmarks+=marks[i];
        }
    }
    percentage=("percentage: %.2f%%\n", percentage);
    if(percentage>70){
        printf("class: distinction\n");
    }else if(percentage>=61){ 
        printf("class: firstclass\n");
    }else if(percentage>=46){ 
        printf("class: secondclass\n");
    }else if(percentage>=36){ 
        printf("class: passclass\n");
    
    }else{
        printf("class: Fail\n");
    }
}