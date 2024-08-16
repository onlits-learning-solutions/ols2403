#include <stdio.h>
int main(void)
{
    int org, rev = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &org);

    temp = org;

    while (temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (org == rev)
        printf("%d is a pallindrome number.\n", org);
    else
        printf("%d is a not pallindrome number.\n", org);

    return 0;
}