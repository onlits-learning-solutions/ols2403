#include <stdio.h>
int main(void)
{
    int a, b, c; // type declaration
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    c = a + b;
    printf("The sum is %d.\n", c);
}
