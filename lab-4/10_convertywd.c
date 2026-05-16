#include <stdio.h>

void main() {
    int total_days;
    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    const int days_in_year = 365;
    const int days_in_week = 7;
    
    int years = total_days / days_in_year;
    int remaining_days_after_years = total_days % days_in_year;
    int weeks = remaining_days_after_years / days_in_week;
    int days = remaining_days_after_years % days_in_week;

    printf("%d years, %d weeks, and %d days\n", years, weeks, days);
}
