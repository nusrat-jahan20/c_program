#include<stdio.h>
int main()
{
    int arr[100] ;
    int n, i, pos;

    printf("Number of array elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the location where you wish to delete the element: ");
    scanf("%d", &pos);

    if(pos > n)
    {
        printf("Deletion is not possible.\n");
    }
    else
    {
        for ( i = pos; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }

        printf("The resultant array is: ");
        for(i = 1; i <= n - 1; i++)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}