#include<stdio.h>
int main()
{
    int a, b, c, d, denominator, numerator;
    float ratio;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    denominator = a + b;
    numerator = c - d;
    ratio = (float)(denominator) / (float)(numerator);
    if (numerator =! 0){
        printf("Ratio = %f\n", ratio);
    }
        return 0;
}