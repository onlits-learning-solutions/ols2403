#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter an integer between 1 and 7: ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid Integer!\nI think you don't know how to read and write!\n");
    }
    return 0;
}
