#include<stdio.h>
#include<string.h>

int main()
{
    int i, count = 0;
    char str1[100],  str2[100];

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2)
    {
        printf("Both aren't same.\n");
    }
    else
    {
        for ( i = 0; i < len1; i++)
        {
            if(str1[i] == str2[i])
                count++;
        }
        if (count == len1)
        {
            printf("Both are same.\n");
        }
        else
        {
            printf("Both aren't same.\n");
        }
    }

    return 0;
}