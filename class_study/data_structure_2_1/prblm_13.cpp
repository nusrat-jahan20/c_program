#include<stdio.h>
int main()
{
    int n, i, j, sum = 0;

    printf("Enter numbers of row & column : ");
    scanf("%d", &n);

    int MAT[10][10];
    printf("Enter the Matrix : \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &MAT[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if ( i == j )
            {
                sum = sum + MAT[i][j];
            }   
        }      
    }

    printf("\nThe sum of diagonal elements of the square matrix is : %d", sum);

        return 0;
}