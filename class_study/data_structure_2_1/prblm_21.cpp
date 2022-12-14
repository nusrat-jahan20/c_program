#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char Old, New;

    printf("Enter the string : ");
    gets(str);
    int i, length = strlen(str);

    printf("Enter the character for replace : ");
    scanf("%c %c", &Old, &New);

    printf("Replace array : ");
    for ( i = 0; i < length; i++)
    {
        if (str[i] == Old)
        {
            printf("%c", New);
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}