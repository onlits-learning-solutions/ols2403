#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;
read: // label
    scanf("%lf", &x);
    if (x < 0)
        goto read;
    y = sqrt(x);
    printf("%lf %lf\n", x, y);
    goto read;
    return 0;
}