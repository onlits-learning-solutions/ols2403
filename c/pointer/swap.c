#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("The value of a and b atfer swapping are %d and %d, respectively.\n", a, b);
    return 0;
}

void swap(int *a, int *b) // call by reference
{
    int t = *a;
    *a = *b;
    *b = t;
}