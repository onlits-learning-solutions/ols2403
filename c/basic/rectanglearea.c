#include <stdio.h>

int main(void)            // f(n) = 1 => f(1) => O(1)
{
    float length, breadth, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}