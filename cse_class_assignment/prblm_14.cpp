#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("The largest of the three numbers is %d", a);
    }
    else if (b > c && b > a)
    {
        printf("The largest of the three numbers is %d", b);
    }
    else 
    {
        printf("The largest of the three numbers is %d", c);
    }
        return 0;
}