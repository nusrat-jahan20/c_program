#include<stdio.h>
int main()
{
    int n,sum=0;
    for(n=1;n<=100;n++)
    {
        if(n%6==0)
        {
            printf("%d\n",n);
            sum = sum + n;
        }
    }
    printf("%d", sum);
    return 0;
}