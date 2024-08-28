#include <stdio.h>
int main(void)
{
    int n, i, factors = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factors of %d are:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factors++;
        }
    }

    if (factors == 2)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}