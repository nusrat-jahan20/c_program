#include <stdio.h>

int main()
{
    int n, m, i, j;

    printf("Enter number of input: ");
    scanf("%d %d", &n, &m);

    for ( i = 1; i <= n; i++)  
    {
        for (j = 1; j <= m; j++)
        {
            printf("* ");
        }
        m = m - 1;
        printf("\n");
    }

    return 0;
}
