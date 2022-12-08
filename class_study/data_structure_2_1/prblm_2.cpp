#include<stdio.h>
int main()
{
    int n, i, j, max, min, arr[n];

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            if (arr[i] > arr[i + j])
            {
                arr[max] = arr[i];
                printf("%d", arr[max]);
            }
        }
    }
    

    return 0;
}
