#include <stdio.h>

struct date
{
    int dd;
    int mm;
    int yyyy;
};

void getShortDate(struct date d);
void getLongDate(struct date d);
void getLongDateWithDayName(struct date d);

int main(int argc, char const *argv[])
{
    struct date d;
    printf("Enter a date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &d.dd, &d.mm, &d.yyyy);
    printf("Short Date: ");
    getShortDate(d);
    printf("Long Date: ");
    getLongDate(d);
    printf("Long Date with Day Name: ");
    getLongDateWithDayName(d);
    return 0;
}

void getShortDate(struct date d)
{
    printf("%02d-%02d-%d\n", d.dd, d.mm, d.yyyy);
}

void getLongDate(struct date d)
{
    switch (d.mm)
    {
    case 1:
        printf("January %02d, %d\n", d.dd, d.yyyy);
        break;
    case 2:
        printf("February %02d, %d\n", d.dd, d.yyyy);
        break;
    case 3:
        printf("March %02d, %d\n", d.dd, d.yyyy);
        break;
    case 4:
        printf("April %02d, %d\n", d.dd, d.yyyy);
        break;
    case 5:
        printf("May %02d, %d\n", d.dd, d.yyyy);
        break;
    case 6:
        printf("June %02d, %d\n", d.dd, d.yyyy);
        break;
    case 7:
        printf("July %02d, %d\n", d.dd, d.yyyy);
        break;
    case 8:
        printf("August %02d, %d\n", d.dd, d.yyyy);
        break;
    case 9:
        printf("September %02d, %d\n", d.dd, d.yyyy);
        break;
    case 10:
        printf("October %02d, %d\n", d.dd, d.yyyy);
        break;
    case 11:
        printf("November %02d, %d\n", d.dd, d.yyyy);
        break;
    case 12:
        printf("December %02d, %d\n", d.dd, d.yyyy);
        break;
    }
}

void getLongDateWithDayName(struct date d)
{
    int weekDay = d.dd % 7;

    switch (weekDay)
    {
    case 1:
        printf("Monday ");
        getLongDate(d);
        break;
    case 2:
        printf("Tuesday ");
        getLongDate(d);
        break;
    case 3:
        printf("Wednesday ");
        getLongDate(d);
        break;
    case 4:
        printf("Thursday ");
        getLongDate(d);
        break;
    case 5:
        printf("Friday ");
        getLongDate(d);
        break;
    case 6:
        printf("Saturday ");
        getLongDate(d);
        break;
    case 7:
        printf("Sunday ");
        getLongDate(d);
        break;
    }
}
