#include <stdio.h>
int main()
{
    int n, arr[20], i;
    printf("Number of array elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array is ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe reverse array is ");
    for (i = n ; i > 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
