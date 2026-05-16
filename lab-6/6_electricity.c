#include <stdio.h>

void main() {

    float units, bill, surcharge, totalBill;

    printf("Enter electricity unit charge: ");
    scanf("%f", &units);

    bill = 0.0;

    if (units > 250) {
        bill += (units - 250) * 1.50; 
        units = 250; 
    }
    if (units > 150) {
        bill += (units - 150) * 1.20; 
        units = 150; 
    }
    if (units > 50) {
        bill += (units - 50) * 0.75; 
        units = 50;
    }
    bill += units * 0.50;

    surcharge = 0.20 * bill;

    totalBill = bill + surcharge;

    printf("Total electricity bill: %.2f\n", totalBill);
}
