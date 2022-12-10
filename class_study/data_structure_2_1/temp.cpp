#include <stdio.h>

int main()
{
    int arr[100], pos, i, n;

    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the location where you wish to delete element : ");
    scanf("%d", &pos);

    if (pos >= n + 1)
        printf("Deletion not possible.\n");

    else
    {
        for (i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];

        printf("Resultant array is : ");
        for (i = 0; i < n - 1; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}
