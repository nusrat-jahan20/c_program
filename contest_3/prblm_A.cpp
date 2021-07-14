#include<stdio.h>

int main()
{
    int A, B, max, extra;
    scanf("%d %d", &A, &B);
    max = (2 * A) + 100;
    extra = max - B;
    printf("%d\n", extra);
    return 0;
}