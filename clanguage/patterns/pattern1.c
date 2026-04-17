#include<stdio.h>
int main()
{
    int i,j,n,m=65,k=1;
    printf("enter the value of the rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            if(j%2==0)
            {
                printf("%c",m);
                m++;
            }
            else
            {
                printf("%d",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}