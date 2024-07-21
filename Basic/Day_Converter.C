#include<stdio.h>

int main()
{
    int total_days, years, months, weeks, days;
    printf("Enter total days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    months = (total_days % 365) / 30;
    weeks = (total_days % 365) % 30 / 7;
    days = (total_days % 365) % 30 % 7;

    printf("%d years, %d months, %d weeks, and %d days\n", years, months, weeks, days);

    return 0;
}