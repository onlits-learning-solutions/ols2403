#include <stdio.h>

#define SLAB1 0.80
#define SLAB2 0.90
#define SLAB3 1.0
#define METER 100
#define SUR 15.0

int main(void)
{
    char name[50];
    int units;
    float charge;
    printf("Enter Name: ");
    scanf("%[^\n]", name);
    printf("Enter number of units: ");
    scanf("%d", &units);
    if (units <= 200)
    {
        charge = units * SLAB1;
    }
    else if (units <= 300)
    {
        charge = 200 * SLAB1;
        units = units - 200;
        charge = charge + (units * SLAB2);
    }
    else if (units > 300)
    {
        charge = 200 * SLAB1;
        charge = charge + (100 * SLAB2);
        units = units - 300;
        charge = charge + (units * SLAB3);
    }

    charge = charge + METER;

    if(charge > 400)
        charge = charge + (charge * 0.15);

    printf("User Name: %s\n", name);
    printf("Charge: %1.2f\n", charge);
    return 0;
}