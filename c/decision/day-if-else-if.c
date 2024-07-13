#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter an integer between 1 and 7: ");
    scanf("%d", &i);
    if (i == 1)
        printf("Monday\n");
    else if (i == 2)
        printf("Tuesday\n");
    else if (i == 3)
        printf("Wednesday\n");
    else if (i == 4)
        printf("Thursday\n");
    else if (i == 5)
        printf("Friday\n");
    else if (i == 6)
        printf("Saturday\n");
    else if (i == 7)
        printf("Sunday\n");
    else
        printf("Invalid Integer!\nI think you don't know how to read and write!\n");
    return 0;
}
