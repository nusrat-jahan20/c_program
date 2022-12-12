#include <stdio.h>

int main()
{
    int r, c, sum = 0;
    printf("Enter numbers of row : ");
    scanf("%d", &r);
    printf("Enter numbers of column : ");
    scanf("%d", &c);

    int arr[r][c], i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
                sum = sum + arr[i][j];
        }
    }
    printf("\nThe sum of diagonal elements of a square matrix is : %d\n", sum);

    return 0;
}
