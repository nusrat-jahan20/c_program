#include <stdio.h>

int main()
{
    // freopen("input.txt","r",stdin);

    char arr[3];
    int i, count = 1;
    for (i = 1; i <= 3; i++){
        scanf("%d", &arr[i]);
    }
    if(arr[i] == 'S' || arr[i] == 'R')
    {
        for (j = 1; j <= 3; j++){
            arr[i] = arr[j];
            if (arr[j] == 'R' && arr[j + 1] == 'R')
            {
                count = count + 1;
                printf("%d", count);
            }
            else
            {
                count = 1;
                printf("%d", count);
            }
        }
            
    }
}

// while (fgets(arr, sizeof(arr), stdin))
// {
//     arr[i] = 'R';
//     if (arr[i] == arr[i + 1])
//     {
//         count = count + 1;
//         printf("%d", count);
//     }
//     else
//     {
//         count = 1;
//         printf("%d", count);
//     }
// }
// return 0;