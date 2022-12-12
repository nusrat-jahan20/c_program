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
        for ( j = i - 1; j >=0; j--)
        {
            if (arr[j] > temp)
            {   
                arr[j + 1] = arr[j];
            }
            else
            {
                arr[j + 1] = temp;
            }
        }
    }

    printf("The sorted list is :");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}