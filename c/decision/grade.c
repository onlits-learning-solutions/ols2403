#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks > 100 || marks < 0)
        printf("Invalid marks!\n");
    else if (marks >= 80)
        printf("Grade A!\n");
    else if (marks >= 60)
        printf("Grade B!\n");
    else if (marks >= 40)
        printf("Grade C!\n");
    else if (marks < 40)
        printf("Grade F!\n");
    return 0;
}
