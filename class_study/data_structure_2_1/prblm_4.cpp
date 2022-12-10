#include <stdio.h>
int main()
{
    int arr[50];
    int i, j, n, flag=0;

    printf("Number of array element:");
    scanf("%d", &n);

    printf("Enter the array element:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
    {
        printf("No duplicate.");
    }
    else
    {
        printf("Duplicate value is present.");
    }

    return 0;
}