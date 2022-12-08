#include <stdio.h>
int main()
{
    float F, C;
    
    scanf("%f", &F);
    C = (F - 32) / 1.8;
    printf("%.2f\n", C);
    return 0;
}