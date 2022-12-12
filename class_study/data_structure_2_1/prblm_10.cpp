#include<stdio.h>
int main()
{
    int r, c;

    printf("\nEnter numbers of row : ");
    scanf("%d", &r);

    printf("\nEnter numbers of column : ");
    scanf("%d", &c);

    int i, j ,arr[r][c];

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix is : ");
    for ( i = 0; i < r; i++)
    {
        printf("\n");
        for ( j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}