#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[50], ch;

    printf("Enter the string : ");
    gets(str);

    int length = strlen(str);

    printf("Enter the character for delete : ");
    scanf("%c", &ch);

    printf("After removing %c character in the string, we get : ");
    for ( i = 0; i < length; i++)
    {
        if (str[i] != ch)      
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}