/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
