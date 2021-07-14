#include <stdio.h>
    int main()
    {
        int n, i, count,m,j;
        scanf("%d", &n);
        count = 0;
        for (i = 2; i < n; i++)
        {
            if (n % i ==0)
            {
                count++;
                break;
            }
        }    
        if(count==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        return 0;
    }