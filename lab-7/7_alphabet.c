#include<stdio.h>
void main(){

    char ch;
    printf("Enter a value of ch: ");
    scanf("%c" , &ch);

    ('A'<= ch && 'z'>=ch || 'a'<=ch && 'z'>=ch)?printf("alphabet\n"):printf("Not alphabet\n");

}