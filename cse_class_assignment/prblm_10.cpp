#include<stdio.h>
int main()
{
    float d;
    int p;
    printf("Enter decimal form ");
    scanf("%f", &d);
    p = d * 100;
    printf("%d paisa\n", p);
    return 0;
}