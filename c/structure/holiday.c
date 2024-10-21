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
    int id;
    char name[50];
    DATE date;
    char description[100];
} HOLIDAY;

void displayHolidayList(HOLIDAY *holiday, int size);
void newHoliday(HOLIDAY *holiday, int size);
void displayHolidayById(HOLIDAY *holiday, int size, int id);

int main(int argc, char const *argv[])
{
    HOLIDAY holiday[MAX];
    int ch, size = 0;

    while (1)
    {
        printf("MENU\n");
        printf("1. Display Holiday List\n");
        printf("2. New Holiday\n");

        printf("Enter choice [0 to exit]: ");
        scanf("%d%*c", &ch);

        switch (ch)
        {
        case 0:
            printf("Bye!\n");
            exit(0);
            break;
        case 1:
            displayHolidayList(holiday, size);
            break;
        case 2:
            newHoliday(holiday, size);
            break;
        default:
            printf("\nInvalid option!\n\n");
            break;
        }
    }
    return 0;
}

void displayHolidayList(HOLIDAY *holiday, int size)
{
    printf("\n\nHOLIDAY LIST\n");
    printf("Date\tName\tDescription\n");
}

void newHoliday(HOLIDAY *holiday, int size)
{
    int id = 1;
    holiday->id = id;
    printf("Enter holiday name: ");
    scanf("%[^\n]", holiday->name);
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d%*c", &holiday->date.dd, &holiday->date.mm, &holiday->date.yyyy);
    printf("Enter description: ");
    scanf("%[^\n]", holiday->description);
}

void displayHolidayById(HOLIDAY *holiday, int size, int id)
{
    // for (int i = 0; i < size; i++)
    // {
    //     if (holiday[i] == id)
    //     {
    //         printf("Id: %d\n", holiday->id);
    //         printf("Name: %s\n", holiday->name);
    //         printf("Date: %2d/%2d/%d\n", holiday->date.dd, holiday->date.mm, holiday->date.yyyy);
    //         printf("Description: %s\n", holiday->description);
    //     }
    // }
}
