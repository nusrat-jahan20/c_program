#include<stdio.h>

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    if(n >= 1){
        for (i = 2; i <= n; i++)
        {
            count = count + 1;
            n = n + i;
        }
        printf("%d\n", count);
    }
    else{
        printf("1");
    }
    return 0;
}