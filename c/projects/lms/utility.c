#include "lms.h"

DATE current_date()
{
    time_t t;
    time(&t);
    struct tm *ct = localtime(&t);
    DATE d;
    d.day = ct->tm_mday;
    d.month = ct->tm_mon + 1;
    d.year = ct->tm_year + 1900;
    return d;
}

char *day_name(int day_num)
{
    switch (day_num)
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
    default:
        break;
    }
}

char *month_name(int month_num)
{
    switch (month_num)
    {
    case 1:
        return "January";
        break;
    case 2:
        return "February";
        break;
    case 3:
        return "March";
        break;
    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    DATE today;
    today = current_date();
    printf("Current date: %d-%d-%d.\n", today.day, today.month, today.year);
    printf("%s\n", month_name(today.month));
    // printf("%s\n", day_name(today.day / 7));

    return 0;
}