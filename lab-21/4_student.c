#include <stdio.h>

struct Student {
    char name[50];
    float percentage;
    int age;
};

void main() {
    struct Student students[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name); 
        
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        
        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("\n"); 
    }
    
    printf("Details of 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

}
