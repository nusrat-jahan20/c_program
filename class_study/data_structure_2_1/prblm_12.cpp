#include<stdio.h>
int main()
{
    int r, c;

    printf("\nEnter numbers of row : ");
    scanf("%d", &r);

    printf("\nEnter numbers of column : ");
    scanf("%d", &c);

    int MAT[r][c], i, j;
    printf("\nEnter the Matrix elements : \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d", &MAT[i][j]);
        }
    }

    printf("\nThe Transpos Matrix is : ");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d ", MAT[j][i]);
        }
    }

    return 0;
}