#include <stdio.h>
int main(void)
{
    float side1, side2, side3, largest, others;
    printf("Enter side 1: ");
    scanf("%f", &side1);
    printf("Enter side 2: ");
    scanf("%f", &side2);
    printf("Enter side 3: ");
    scanf("%f", &side3);

    largest = side1;
    others = side2 + side3;

    if (largest < side2)
    {
        largest = side2;
        others = side1 + side3;
    }

    if (largest < side3)
    {
        largest = side3;
        others = side1 + side2;
    }

    if (others > largest)
        printf("The triange is valid.\n");
    else
        printf("The triangle is not valid.\n");

    return 0;
}