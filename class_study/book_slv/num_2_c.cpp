#include<stdio.h>
int main()
{
    int i;
    float x[10], value, total;
    printf("ENTER 10 REAL NUMBERS ");
    for(i=0;i<10;i++)
    {
        scanf("%f",&value);
        x[i]=value;
    }
    total=0.0;
    for(i=0;i<10;i++)
    {
        total=total+x[i]*x[i];
    }
    for (i = 0; i<10; i++)
    {
        printf("x[%d]=%5.2f\n",i+1,x[i]);
    }
    printf("Total=%.2f\n", total);
    return 0;
}