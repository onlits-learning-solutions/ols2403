#include <stdio.h>

struct date
{
    int dd;
    int mm;
    int yyyy;
};

int main(int argc, char const *argv[])
{
    struct date d;
    printf("Enter a date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &d.dd, &d.mm, &d.yyyy);
    printf("Short Date: %02d-%02d-%d\n", d.dd, d.mm, d.yyyy);
    switch(d.mm)
    {
        case 1:
            printf("Long Date: January %02d, %d\n", d.dd, d.yyyy);
            break;
        case 2:
            printf("Long Date: February %02d, %d\n", d.dd, d.yyyy);
            break;
        case 3:
            printf("Long Date: March %02d, %d\n", d.dd, d.yyyy);
            break;
        case 4:
            printf("Long Date: April %02d, %d\n", d.dd, d.yyyy);
            break;
        case 5:
            printf("Long Date: May %02d, %d\n", d.dd, d.yyyy);
            break;
        case 6:
            printf("Long Date: June %02d, %d\n", d.dd, d.yyyy);
            break;
        case 7:
            printf("Long Date: July %02d, %d\n", d.dd, d.yyyy);
            break;
        case 8:
            printf("Long Date: August %02d, %d\n", d.dd, d.yyyy);
            break;
        case 9:
            printf("Long Date: September %02d, %d\n", d.dd, d.yyyy);
            break;
        case 10:
            printf("Long Date: October %02d, %d\n", d.dd, d.yyyy);
            break;
        case 11:
            printf("Long Date: November %02d, %d\n", d.dd, d.yyyy);
            break;
        case 12:
            printf("Long Date: December %02d, %d\n", d.dd, d.yyyy);
            break;
    }
    return 0;
}
