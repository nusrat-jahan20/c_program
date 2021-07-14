#include<stdio.h>
int main()
{
    int A, B, C, test, n;
    scanf("%d", &n);
    for (test = 0; test < n; test++)
    {
        scanf("%d %d %d", &A, &B, &C);
        if(A>B && A>C){
            if(B>C){
                printf("%d\n", B);
            }
            else{
                printf("%d\n", C);
            }
        }
        else if(B>A && B>C){
            if(A>C){
                printf("%d\n", A);
            }
            else{
                printf("%d\n", C);
            } 
        }
        else if(C>A &&C>B){
            if(A>B){
                printf("%d\n", A);
            }
            else{
                printf("%d\n", B);
            }
        }
    }
    return 0;
}
