#include <stdio.h>
int main(void)
{
    float quantity, price, discount = 0, total;
    printf("Enter item quantity: ");
    scanf("%f", &quantity);
    printf("Enter price per item: ");
    scanf("%f", &price);

    if (quantity > 1000)
        discount = 10;

    total = (price * quantity) - ((price * quantity * discount) / 100);
    printf("Total expenses: Rs. %1.2f.\n", total);
    return 0;
}