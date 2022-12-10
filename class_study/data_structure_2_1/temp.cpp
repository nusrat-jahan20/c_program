#include <stdio.h>
int main()
{
    int arr[50], pos, i, n, value, size;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements: ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nPlease enter the location where you want to insert a new element : ");
    scanf("%d", &pos);

    printf("\nPlease enter the value : ");
    scanf("%d", &value);

    for (i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];

    arr[pos - 1] = value;

    printf("\nResultant array is : ");

    for (i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}