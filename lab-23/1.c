#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    int backlogs;
};

void writeStudentDataToFile() {
    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter number of backlogs for student %d: ", i + 1);
        scanf("%d", &students[i].backlogs);

        fprintf(file, "%d %s %d\n", students[i].rollNumber, students[i].name, students[i].backlogs);
    }

    fclose(file);
}

void findStudentsWithMoreThanFiveBacklogs() {
    FILE *file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct Student student;
    printf("Students with more than 5 backlogs:\n");
    while (fscanf(file, "%d %s %d", &student.rollNumber, student.name, &student.backlogs) != EOF) {
        if (student.backlogs > 5) {
            printf("Roll Number: %d\n", student.rollNumber);
        }
    }

    fclose(file);
}

void main() {
    writeStudentDataToFile();
    findStudentsWithMoreThanFiveBacklogs();

}
