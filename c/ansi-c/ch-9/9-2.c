#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ans[50], i;
    for (i = 1; i <= 3; i++)
    {
        printf("Q. Who is the inventory of C?\n");
        printf("A. ");
        scanf("%[^\n]%*c", ans);
        if (strcmp(ans, "Dennis Ritche") == 0)
        {
            printf("Good!\n");
            break;
        }
        else
        {
            printf("Try again!\n");
        }
    }

    if (i >= 4)
        printf("All your attempts are exhausted! Correct answer is 'Dennis Ritche'.\n");

    return 0;
}
