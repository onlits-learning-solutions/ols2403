#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, t0 = 0, t1 = 1, tn;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The fibonacci series upto %d terms:\n", n);
    printf("%d %d ", t0, t1);

    for (int i = 2; i < n; i++)
    {
        tn = t0 + t1;
        printf("%d ", tn);
        t0 = t1;
        t1 = tn;
    }
    printf("\n");
    return 0;
}
