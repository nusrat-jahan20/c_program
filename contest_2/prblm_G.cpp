#include<stdio.h>
int main()
{
    unsigned long a, b, c, d;
    while(scanf("%lu %lu", &a, &b) != EOF){
        if (a > b)
        {
            c = a - b;
            printf("%lu\n", c);
        }
        else
        {
            d = b - a;
            printf("%lu\n", d);
        }
    }

        return 0;
}
