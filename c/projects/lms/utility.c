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

DATE date_add_day(DATE date, int days)
{

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
    default:
        return "Invalid";
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
    case 4:
        return "April";
        break;
    case 5:
        return "May";
        break;
    case 6:
        return "June";
        break;
    case 7:
        return "July";
        break;
    case 8:
        return "August";
        break;
    case 9:
        return "September";
        break;
    case 10:
        return "October";
        break;
    case 11:
        return "November";
        break;
    case 12:
        return "December";
        break;
    default:
        return "Invalid";
    }
}