#include <stdio.h>
int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("Leap year!\n");
    }
    else if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            printf("Leap year!\n");
        }
        else
        {
            printf("Common year!\n");
        }
    }
    else
    {
        printf("Common year!\n");
    }
    return 0;
}