#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++)        //outer loop
    {
        for (j = 1; j <= i; j++)    //inner loop
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}