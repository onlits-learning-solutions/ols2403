#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("Capital Letter\n");
    else if (ch >= 97 && ch <= 122)
        printf("Small Letter\n");
    else if (ch >= 48 && ch <= 57)
        printf("Digit\n");
    else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64 && ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127))
        printf("Special Symbols\n");
    else
        printf("Invalid character!\n");
    return 0;
}