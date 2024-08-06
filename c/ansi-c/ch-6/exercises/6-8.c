#include <stdio.h>
#define MILL 1
#define HANDLOOM 2

int main(void)
{
    int type;
    float purchase, discount, net;
    printf("Enter purchase price: ");
    scanf("%f", &purchase);
    printf("Enter cloth type (1-MILL, 2-Handloom): ");
    scanf("%d", &type);
    switch (type)
    {
    case MILL:
        if (purchase >= 0 && purchase <= 100)
            discount = 0.0F;
        else if (purchase <= 200)
            discount = purchase * 0.05F;
        else if (purchase <= 300)
            discount = purchase * 0.075F;
        else if (purchase > 300)
            discount = purchase * 0.1F;
        break;
    case HANDLOOM:
        if (purchase >= 0 && purchase <= 100)
            discount = purchase * 0.05F;
        else if (purchase <= 200)
            discount = purchase * 0.075F;
        else if (purchase <= 300)
            discount = purchase * 0.1F;
        else if (purchase > 300)
            discount = purchase * 0.15F;
        break;
    }
    net = purchase - discount;
    printf("Net Amount = %1.2f\n", net);
    return 0;
}