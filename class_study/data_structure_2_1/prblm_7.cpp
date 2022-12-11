#include<stdio.h>
int main()
{
    int arr[100], x, y, i;
   
    printf("\nEnter number of elements of the first array : ");
    scanf("%d", &x);

    int arr1[x + 1];

    printf("Enter the elements of first array : ");
    for ( i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
        arr[i] = arr1[i];
    }

    printf("\nEnter number of elements of the second array : ");
    scanf("%d", &y);

    int arr2[y + 1];

    printf("Enter the elements of second array : ");
    for (i = x; i < x + y; i++)
    {
        scanf("%d", &arr2[i]);
        arr[i] = arr2[i];
    }

    printf("\nThe resultant array is : ", y);
    for (i = 0; i < x + y; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}