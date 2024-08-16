#include <stdio.h>
int main(void)
{
    int org, rev, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &org);

    temp = org;

    digit = temp % 10;      // digit = 12345 % 10 =>5
    rev = digit;            // rev = 5 => 5
    temp /= 10;             // temp = 12345 / 10 => 1234

    digit = temp % 10;      // digit = 1234 % 10 => 4
    rev = rev * 10 + digit; // rev = 5 * 10 + 4 => 54
    temp /= 10;             // temp = 1234 / 10 => 123

    digit = temp % 10;      // digit = 123 % 10 => 3
    rev = rev * 10 + digit; // rev = 54 * 10 + 3 => 543
    temp /= 10;             // temp = 123 / 10 => 12

    digit = temp % 10;      // digit = 12 % 10 => 2
    rev = rev * 10 + digit; // rev = 543 * 10 + 2 =5> 5432
    temp /= 10;             // temp = 12 / 10 => 1

    rev = rev * 10 + temp; // rev = 5432 * 10 + 1 =5> 54321

    if (org == rev)
        printf("The original and reversed numbers are equal.\n");
    else
        printf("The original and reversed numbers are not equal.\n");

    return 0;
}