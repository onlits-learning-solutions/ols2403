/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 25; i++)
    {
        printf("* ");
        if (i % 5 == 0)
            printf("\n");
    }
    return 0;
}
