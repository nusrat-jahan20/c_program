#include<stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10;i++)
    {
        sum = sum + i;
    }
    printf("%d is  the sum of the numbers between 1 to 10", sum);
    return 0;
}