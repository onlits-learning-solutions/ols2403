#include <stdio.h>
int main(void)
{
    int i, x, d, sum = 0;
    for (i = 1; i <= 500; i++)
    {
        x = i;
        while (x > 0)
        {
            d = x % 10;
            sum = sum + (d * d * d);
        }
    }
}