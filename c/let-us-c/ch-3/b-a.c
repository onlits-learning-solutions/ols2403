#include <stdio.h>
int main(void)
{
    int i, hours, overtime, otpay;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter hours worked: ");
        scanf("%d", &hours);
        if (hours <= 40)
        {
            otpay = 0;
        }
        else
        {
            overtime = hours - 40;
            otpay = overtime * 12;
        }
        printf("Overtime pay: %d\n", otpay);
    }
    return 0;
}