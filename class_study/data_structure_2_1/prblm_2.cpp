#include<stdio.h>
int main()
{
    int n, i, j, max, min, arr[n];
    int Large, Small;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter the Array: ");

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    Large = arr[1];
    Small = arr[1];

    for (i = 1; i <= n; i++)
    {
        if(arr[i]>Large)
        {
            Large = arr[i];
        }
        if (arr[i] < Small)
        {
            Small = arr[i];
        }
        printf("max element is%d", Large);
        printf("min element is%d", Small);
    }
    return 0;
}
