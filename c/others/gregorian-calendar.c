#include <stdio.h>

char *dayname(int n);

int main(void)
{
    int year, total_years, leap_years, common_years, no_of_days;
    printf("Enter a year: ");
    scanf("%d", &year);

    total_years = (year - 1) - 1900;
    leap_years = total_years / 4;
    common_years = total_years - leap_years;
    no_of_days = (leap_years * 366) + (common_years * 365) + 2;
    printf("1st January of %d was %s.\n", year, dayname(no_of_days % 7));
    return 0;
}

char *dayname(int n)
{
    switch (n)
    {
    case 1:
        return "Monday";
        break;
    case 2:
        return "Tuesday";
        break;
    case 3:
        return "Wednesday";
        break;
    case 4:
        return "Thursday";
        break;
    case 5:
        return "Friday";
        break;
    case 6:
        return "Saturday";
        break;
    case 7:
        return "Sunday";
        break;
    default:
        return "Invalid";
        break;
    }
}