#include<stdio.h>
int main()
{
    int arr[100], n, i, pos, value;

    printf("Number of array elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the location to insert new element: ");
    scanf("%d", &pos);

    printf("\nEnter the value: ");
    scanf("%d", &value);

    for ( i = n; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;

    printf("\nResultant array is : ");
    for ( i = 1; i <= n+1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}