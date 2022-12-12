#include<stdio.h>
int main()
{
    int i, length;
    char s[100];

    printf("Enter the string : ");
    gets(s);

    for ( i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    
    printf("The length of the string is %d", length);

    return 0;
}