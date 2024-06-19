#include <stdio.h>
int main(void)
{
    int bs, da, hra, gs;
    printf("Enter basic salary: ");
    scanf("%d", &bs);
    da = bs * 40 / 100;
    hra = bs * 20 / 100;
    gs = bs + da + hra;
    printf("Gross Salary is %d.\n", gs);
}