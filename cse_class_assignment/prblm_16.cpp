#include<stdio.h>
int main()
{
    int i, count=0, sum;
    for (i = 15; i <= 75; i++)
    {
        if (i % 5 == 0)
        {
            if (i % 8 != 0)
            {
                printf("%d\n", i);
            }
        }
        count++;
        sum = 0;
        sum = sum + i;
        // printf("%d", sum);
    }
    // printf("Total number = %d", count);
    printf("Sum of those numbers is %d", sum);
    return 0;
}