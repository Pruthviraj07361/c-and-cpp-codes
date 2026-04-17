#include <stdio.h>

int main()
{
    int i, j, a[3][3];
    printf("now for add the matrix you want");
    // Input
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[1][j]==0)
            {         
                ++j;
                a[i][j]=0;
            

            }

        }
        printf("\n"); // new row
    }
    // Output (print matrix)
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n"); // new row
    }
    
    return 0;
}