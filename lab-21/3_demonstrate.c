#include <stdio.h>

struct EmployeeStruct {
    int id;
    char name[20];
    float salary;
};

union EmployeeUnion {
    int id;
    char name[20];
    float salary;
};

void main() {
    
    struct EmployeeStruct empStruct;
    union EmployeeUnion empUnion;

    
    printf("Size of structure: %lu bytes\n", sizeof(empStruct));
    printf("Size of union: %lu bytes\n", sizeof(empUnion));

    empStruct.id = 1;
    snprintf(empStruct.name, sizeof(empStruct.name), "Alice");
    empStruct.salary = 50000.0;

    printf("\nStructure values:\n");
    printf("ID: %d\n", empStruct.id);
    printf("Name: %s\n", empStruct.name);
    printf("Salary: %.2f\n", empStruct.salary);

    empUnion.id = 2;
    printf("\nUnion values after setting ID:\n");
    printf("ID: %d\n", empUnion.id);

    snprintf(empUnion.name, sizeof(empUnion.name), "Bob");
    printf("Union values after setting Name:\n");
    printf("Name: %s\n", empUnion.name);

    empUnion.salary = 75000.0;
    printf("Union values after setting Salary:\n");
    printf("Salary: %.2f\n", empUnion.salary);

}
