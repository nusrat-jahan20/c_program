#include <stdio.h>
#define str_size 100 //Declare the maximum size of the string
int main()
{
    char str1[str_size], str2[str_size];
    int flg = 0;
    printf("\nInput the 1st string : ");
    fgets(str1, sizeof str1, stdin);

    printf("Input the 2nd string : ");
    fgets(str2, sizeof str2, stdin);
    int i = 1;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' && str2[i] == '\0')
            break;
        i++;
    }
    if ((str1[i + 1] == '\0') && (str2[i + 1] == '\0'))
        flg = 0;
    else if ((str1[i + 1] != '\0') && (str2[i + 1] == '\0'))
        flg = 1;
    else
        flg = 2;
    if (flg == 0)
    {
        printf("\nThe length of both strings are equal.\n");
    }
    else if (flg == 1)
    {
        printf("\nThe length of the first string is greater than the second string.\n\n");
    }
    else if (flg == 2)
    {
        printf("\nThe length of the second string is greater than the first string.\n\n");
    }
    return 0;
}