#include<stdio.h>
int main()
{
    unsigned long long n, i, fact;
    while(scanf("%lu", &n) != EOF){
        fact = 1;
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("%lu!\n%lu\n", n, fact);

    }
    return 0;
}    




