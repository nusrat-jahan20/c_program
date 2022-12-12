#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int x, y, i;

    printf("Enter the string : ");
    gets(str);

    //int length = strlen(str);

    printf("\nEnter the position to start extraction : ");
    scanf("%d", &x);

    printf("\nEnter the length of substring : ");
    scanf("%d", &y);

    printf("\nThe substring retrieve from the string is : "); 
    for (i = x; i < x + y; i++)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}