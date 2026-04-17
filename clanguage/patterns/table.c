#include<stdio.h>
int main()
{
    int i,j,n;
    for(n=1;n<=10;n++)
    {

        for(i=1;i<=10;i++)
        {
                printf("%d X %d= %d",n,i,i*n);
                printf("\n");
        
        }
        printf("\n");
    }
    
    return 0;
}