#include <stdio.h>
int main(void)
{
    float cp, sp, profit, loss;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if (sp == cp)
    {
        printf("The seller has neither earned profit nor incurred loss.\n");
    }
    else if (sp > cp)
    {
        profit = sp - cp;
        printf("The seller has earned a profit of Rs. %1.2f.\n", profit);
    }
    else
    {
        loss = cp - sp;
        printf("The seller has incurred a loss of Rs. %1.2f.\n", loss);
    }
    return 0;
}