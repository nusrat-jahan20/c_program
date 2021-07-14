#include<stdio.h>
int main()
{
    int num, sum = 0;
    for (num = 101; num <= 200; num++)
    {
        if (num % 2 == 0 && num % 5 == 0)
        {
            printf("%d\n", num);
            sum = sum + num;
        }
    }
    printf("%d", sum);
    return 0;
}