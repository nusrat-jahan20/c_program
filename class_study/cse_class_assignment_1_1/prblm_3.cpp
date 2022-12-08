#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d>0)
    {
        x1 = (- b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %.2lf and x2 = %.2lf", x1, x2);
    }
    else if (d == 0) {
        x1 = x2 = -b / (2 * a);
        printf("x1 = x2 = %.2lf", &x1);
    }
    else {
        x1 = -b / (2 * a);
        x2 = sqrt(-d) / (2 * a);
        printf("x1 = %.2lf and x2 = %.2lf", x1, x2);
    }
    return 0;
}