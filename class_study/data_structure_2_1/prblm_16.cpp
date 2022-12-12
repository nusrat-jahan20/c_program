#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],  str2[100];

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("%d %d", len1, len2);

    return 0;
}