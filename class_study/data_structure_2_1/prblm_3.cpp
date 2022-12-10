#include <stdio.h>
int main()
{
    int N, i, sum=0;
    int A[30];

    printf("Number of the array element ");
    scanf("%d", &N);

    printf("Enter the element of the array ");
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 1; i <= N; i++)
    {
        sum = sum + A[i];
    }
    printf("The sum of array elements is %d", sum);
    
    return 0;
}
