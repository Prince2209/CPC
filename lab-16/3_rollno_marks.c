#include <stdio.h>

void main() {
    int students[20][2]; 
    int i;

    printf("Enter the roll number and marks for 20 students:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i][0]); 
        printf("Marks: ");
        scanf("%d", &students[i][1]); 
    }

    printf("\nRoll Number and Marks of Students:\n");
    printf("Roll No\tMarks\n");
    for (i = 0; i < 20; i++) {
        printf("%d\t%d\n", students[i][0], students[i][1]);
    }

}
