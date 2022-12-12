#include<stdio.h>

int main()
{
    int arr[50], n, i, target;

    printf("Number of array elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search : ");
    scanf("%d", &target);

    for ( i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            break;
        }
    }

    if (i < n)
    {
        printf("Target element found at %d location", i);
    }
    else
    {
        printf("Target element isn't found in the array.");
    }

    return 0;
}