#include <stdio.h>
int main(void)
{
    int number, digit, reverse;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    digit = number % 10;
    reverse = digit;
}