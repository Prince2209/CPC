#include <stdio.h>


struct Employee {
    int id;
    char name[50];
    float salary;
};

void main() {
 
    struct Employee emp1 = {1, "Prince", 55000.50};

    printf("Employee ID: %d\n", emp1.id);
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Salary: %.2f\n", emp1.salary);

}
