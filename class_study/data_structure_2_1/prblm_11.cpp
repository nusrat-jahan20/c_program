#include<stdio.h>
int main()
{
    int matA[10][10], matB[10][10], sum[10][10], mul[10][10], n, i, j, k;

    printf("Enter the number of N : ");
    scanf("%d", &n);

    printf("Enter the elements of Matrix-A : \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    printf("The summation of the two matrices is : ");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            sum[i][j] = matA[i][j] + matB[i][j];
            printf("%d", sum[i][j]);
        }
    }

    printf("The multiplication of the two matrices is : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}