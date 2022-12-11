#include<stdio.h>
int main()
{
    int arr[50], n, i, j, temp, count = 0;

    printf("\nNumber of array elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < n - 1; i++)
    {
        for ( j = 0; j < n - i - 1; j++)
        {
            count++;
            
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nThe sorted list in ascending order : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("\nThe sorted list in decending order : ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\nTotal loop is %d", count);

    return 0;
}