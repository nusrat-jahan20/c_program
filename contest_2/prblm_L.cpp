#include<stdio.h>
int main()
{
    int n, m, i, fn, ln, sum;
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        scanf("%d", &n);
        ln = n % 10;
        fn = n;
        while (fn >= 10)
        {
            fn = fn / 10;
        }
        printf("%d\n", fn+ln);
    }
    return 0;
}
