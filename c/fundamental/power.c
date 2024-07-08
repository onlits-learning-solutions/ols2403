#include <stdio.h>
#include <math.h>
int main(void)
{
    int number, power, result;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter power: ");
    scanf("%d", &power);
    result = pow(number, power);
    printf("%d raised to the power %d is %d.\n", number, power, result);
    return 0;
}