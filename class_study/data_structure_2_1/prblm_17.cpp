#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter the string : ");
    gets(str);

    int i, length = strlen(str);
    
    printf("The reversed array is : ");
    for ( i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}