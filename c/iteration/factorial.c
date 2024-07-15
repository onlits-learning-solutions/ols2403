#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        fact *= i; // fact = fact * i;
    }
    printf("%d! = %d\n", n, fact);
    return 0;
}
