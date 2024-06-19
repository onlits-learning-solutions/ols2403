#include <stdio.h>
int main(void)
{
    float km, m, ft, in, cm;
    printf("Enter distance between any two cities (in km): ");
    scanf("%f", &km);
    m = km * 1000;
    ft = m * 3.28;
    in = ft * 12;
    cm = m * 100;
    printf("Distance in metres: %1.2f.\n", m);
    printf("Distance in feet: %1.2f.\n", ft);
    printf("Distance in inches: %1.2f.\n", in);
    printf("Distance in centimeters: %1.2f.\n", cm);
}