#include <stdio.h>
int main()
{
    int i;
    for (i = 15; i <= 55; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
