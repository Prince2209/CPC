#include <stdio.h>

void main() {
    
    float basicSalary;
    float hra, da, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    
    if (basicSalary >= 30000) {
        hra = 0.30 * basicSalary; 
        da = 0.95 * basicSalary;  
    } else if (basicSalary >= 20000) {
        hra = 0.25 * basicSalary; 
        da = 0.90 * basicSalary;  
    } else if (basicSalary >= 10000) {
        hra = 0.20 * basicSalary; 
        da = 0.80 * basicSalary;  
    } else {
        printf("Basic Salary is below the minimum threshold.\n");
        
    }

    
    grossSalary = basicSalary + hra + da;


    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", grossSalary);

}
