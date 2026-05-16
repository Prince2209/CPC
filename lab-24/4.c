#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    int backlogs;
};

void main() {
   
    struct Student *studentPtr = (struct Student *)malloc(sizeof(struct Student));
    if (studentPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    studentPtr->rollNumber = 1;
    snprintf(studentPtr->name, sizeof(studentPtr->name), "John Doe");  
    studentPtr->backlogs = 3;

    printf("Roll Number: %d\n", studentPtr->rollNumber);
    printf("Name: %s\n", studentPtr->name);
    printf("Backlogs: %d\n", studentPtr->backlogs);

    free(studentPtr);

}
