#include<stdio.h>
int main()
{
    int test, n, m, i, j, ara[10000];
    scanf("%d", &n);
    for (test = 1; test <= n; test++)
    {
        scanf("%d", &m);
        for (i = 0; i < m; i++)
        {
            scanf("%d", &ara[i]);
            // printf("%d\n", ara[i]);
            for (j = 1; j <= m; j++)
            {
                if (ara[i] == ara[i+j])
                {
                    printf("ne krasivo\n");
                }
                else
                {
                    printf("prekrasnyy\n");
                }
            }
        }
    
    }
        return 0;
}

// if (ara[i] == ara[j])
// {
//     printf("ne krasivo");
// }
// else
// {
//     printf("prekrasnyy");
// }