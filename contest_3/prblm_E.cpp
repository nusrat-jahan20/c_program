#include<stdio.h>
int main()
{
    int ar[10000], n, i, sum=0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
    }
    printf("%d\n", sum);
    return 0;
}