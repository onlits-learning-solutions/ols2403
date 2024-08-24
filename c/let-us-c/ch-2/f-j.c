#include <stdio.h>

#define NOT_OK 0
#define OK 1

int main(void)
{
    int order, stock, credit;
    printf("Enter stock: ");
    scanf("%d", &stock);
    printf("Enter order: ");
    scanf("%d", &order);
    printf("Enter credit status (0 for NOT OK and 1 for OK): ");
    scanf("%d", &credit);

    if (order <= stock && credit == OK)
    {
        printf("Supply his requirement.\n");
    }
    else if (credit == NOT_OK)
    {
        printf("Send him intimation.\n");
    }
    else if(credit == OK && stock < order)
    {
        printf("Intimate to him date the balance will be shipped.\n");
    }
    return 0;
}