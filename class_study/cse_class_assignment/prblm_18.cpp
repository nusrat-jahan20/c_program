#include <stdio.h>
#include <math.h>
int main()
{
    int iVar, num, sum = 0;
    float fVar;
    for (num = 1; num <= 10; num++)
    {
        fVar = sqrt((double)num);
        iVar = fVar;
        if (iVar == fVar)
        {
            sum = sum + num;
        }
    }
    printf("%d\n", sum);
    return 0;
}