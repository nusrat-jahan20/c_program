#include<stdio.h>
int main()
{
    int i, count=0, sum=0;
    for (i = 15; i <= 75; i++)
    {
        if (i % 5 == 0)
        {
            if (i % 8 != 0)
            {
                printf("%d\n", i);
                count = count + 1;
                sum = sum + i;
            }
        }
    }
    printf("Total number = %d\n", count);
    printf("Sum of those numbers is %d\n", sum);
    return 0;
}