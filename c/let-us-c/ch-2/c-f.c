#include <stdio.h>

int main(void)
{
    int ram, shyam, ajay, youngest;
    printf("Enter Ram's age: ");
    scanf("%d", &ram);
    printf("Enter Shyam's age: ");
    scanf("%d", &shyam);
    printf("Enter Ajay's age: ");
    scanf("%d", &ajay);

    if(ram < shyam && ram < ajay)
        printf("Ram is youngest of all.\n");
    else if(shyam < ram && shyam < ajay)
        printf("Shyam is the youngest of all.\n");
    else
        printf("Ajay is the youngest of all.\n");
        
    return 0;
}