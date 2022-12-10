#include <stdio.h>
int main()
{
    int n, i, Large, Small;
    int arr[30];

    printf("Number of the array element ");
    scanf("%d", &n);

    printf("Enter the element of the array ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    Large = arr[1];
    Small = arr[1];

    for (i = 1; i <= n; i++)
    {
        if (arr[i] > Large)
        {
            Large = arr[i];
        }
        if (arr[i] < Small)
        {
            Small = arr[i];
        }
    }

    printf("The largest element is %d\n", Large);
    printf("The smallest element is %d", Small);

    return 0;
}
