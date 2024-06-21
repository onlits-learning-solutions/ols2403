#include <stdio.h>
int main(void)
{
    int c, d, t;
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Enter the value of d: ");
    scanf("%d", &d);
    t = c;
    c = d;
    d = t;
    printf("The values of c and d, after swapping are %d and %d, respectively.\n", c, d);
    return 0;
}