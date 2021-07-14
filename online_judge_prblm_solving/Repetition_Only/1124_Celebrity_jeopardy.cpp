#include <stdio.h>
#include<string.h>

int main()
{
    char c[100];
    int length;
    while (fgets(c, 100, stdin))
    {
        length=strlen(c);
        c[length-1] = '\0';
        puts(c);
    }
    return 0;
}