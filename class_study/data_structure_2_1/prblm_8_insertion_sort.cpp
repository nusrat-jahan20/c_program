#include<stdio.h>
int main()
{
    int arr[100], n, i, j, temp;

    printf("Number of array elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (arr[j])
        {
            /* code */
        }
        
    }

    printf("The sorted list is :");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}