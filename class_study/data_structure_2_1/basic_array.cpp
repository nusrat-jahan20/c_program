#include <stdio.h>
int main()
{
    int arr[20], i, n;
    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter the Array: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the array is ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nthe reverse array is ");
    for (i = n ; i > 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
