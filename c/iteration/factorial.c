#include <stdio.h>
int main(void)
{
    long num, i, fact = 1;
    printf("Enter a number: ");
    scanf("%ld", &num);
    for (i = num; i >= 1; i--)
    {
        fact *= i; // fact = fact * i
    }
    printf("The factorial of %ld is %ld.\n", num, fact);
    return 0;
}