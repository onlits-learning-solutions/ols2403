#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} DATE;

typedef struct holiday
{
    char name[50];
    DATE date;
    char description[100];
} HOLIDAY;

void newHoliday(HOLIDAY *holiday);
void displayHoliday(HOLIDAY *holiday);

int main(int argc, char const *argv[])
{
    HOLIDAY holiday;
    newHoliday(&holiday);
    printf("-------------------------------\n");
    displayHoliday(&holiday);
    return 0;
}

void newHoliday(HOLIDAY *holiday)
{
    printf("Enter holiday name: ");
    scanf("%[^\n]", holiday->name);
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d%*c", &holiday->date.dd, &holiday->date.mm, &holiday->date.yyyy);
    printf("Enter description: ");
    scanf("%[^\n]", holiday->description);
}

void displayHoliday(HOLIDAY *holiday)
{
    printf("Holiday Name: %s\n", holiday->name);
    printf("Date: %d/%d/%d\n",holiday->date.dd, holiday->date.mm, holiday->date.yyyy);
    printf("Description: %s\n", holiday->description);
}
