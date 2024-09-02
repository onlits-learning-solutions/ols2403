#include <stdio.h>
int main(void)
{
    int i = 11;
    while (i <= 10)     //Entry
    {
        printf("While loop!\n");
    }                   //Exit

    
    
    
    do                  //Entry
    {
        printf("Do-while loop!\n");
    } while (i <= 10);  //Exit

    return 0;
}