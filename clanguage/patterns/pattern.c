
#include<stdio.h>

int main()
{
    int i,j,k,m;
    printf("please enter the number of m");
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {
        for(k=m-1;k>=i;k--)
        {
            printf(" ");
        }

        if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
        }
        else
        {
            for(j=65;j<(i+65);j++)
            {
                printf("%c",j);
            }
        }

        printf("\n");
    }

    return 0;
}