#include <stdio.h>
main()
{
    int c, d;
    char string[] = "CProgramming";
    for (c = 0; c <= 11; c++)
    {
        d = c + 1;
        printf("%-12.*s\n", d, string);
    }
    return 0;
}