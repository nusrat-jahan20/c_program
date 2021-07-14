#include <stdio.h>
int main()
{
    int Di, Do, M;
    scanf("%d", &Di);
    M = Di / 30;
    Do = Di % 30;
    printf("%d month, %d day", M, Do);
    return 0;
}