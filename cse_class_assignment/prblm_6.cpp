#include<stdio.h>
int main()
{
    char ch, ch1;
    scanf("%c", &ch);
    if(ch<91){
        ch1 = ch + 32;
        printf("%c", ch1);
    }
    else if(ch>96){
        ch1 = ch - 32;
        printf("%c", ch1);
    }
    return 0;
}