#include <stdio.h>

#define I 3
#define J 3

int main(void)
{
    int mat[I][J] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i=0; i<I; i++)
    {
        for(int j=0; j<J; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}