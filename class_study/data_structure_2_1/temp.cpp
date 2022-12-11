#include <stdio.h>

int main()
{
    int x, y, arr[1000];
    printf("Enter numbers of 1st array : ");
    scanf("%d", &x);
    int s1[x + 1];
    printf("Enter %d numbers in this array : ", x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &s1[i]);
        arr[i] = s1[i];
    }



    printf("\nEnter numbers of 2nd array  : ");
    scanf("%d", &y);
    int s2[y + 1];
    printf("Enter %d numbers in this array : ", y);

    for (int i = x; i < x + y; i++)
    {
        scanf("%d", &s2[i]);
        arr[i] = s2[i];
    }

    printf("\nmarge element : ", y);
    for (int i = 0; i < x + y; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
