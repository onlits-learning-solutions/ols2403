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

    printf("Base address of matrix is %p.\n", &mat[0][0]);
    printf("Address of element at indices [2][2] is %p.\n", &mat[2][2]);
    return 0;
}