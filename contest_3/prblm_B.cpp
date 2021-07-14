#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n, p, m;
    scanf("%lu", &n);
    m = pow(5, n);
    printf("%lu\n", m);
    if(n==2)
    {
        printf("%lu\n", m);
    }
    else if(n>2)
    {
        p = m % 100;
        printf("%lu\n",p);
    }
    return 0;
}