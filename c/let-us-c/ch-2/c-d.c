#include <stdio.h>

#define BASE 1900

int main(int argc, char const *argv[])
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    int noOfYears = (year - 1) - BASE;
    int leapYears = noOfYears / 4;
    int commonYears = noOfYears - leapYears;
    int totalDays = leapYears * 366 + commonYears * 365 + 1;
    int day = totalDays % 7;
    // printf("Number of years: %d\n", noOfYears);
    // printf("Leap years: %d\n", leapYears);
    // printf("Common years: %d\n", commonYears);
    // printf("Total days: %d\n", totalDays);
    // printf("Day: %d\n", day);
    switch (day)
    {
    case 0:
        printf("Monday\n");
        break;
    case 1:
        printf("Tuesday\n");
        break;
    case 2:
        printf("Wednesday\n");
        break;
    case 3:
        printf("Thursday\n");
        break;
    case 4:
        printf("Friday\n");
        break;
    case 5:
        printf("Saturday\n");
        break;
    case 6:
        printf("Sunday\n");
        break;
    }
    return 0;
}
