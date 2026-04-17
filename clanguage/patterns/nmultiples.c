#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    scanf("%d",&m);
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=m;i<=k;i++)
    {
        if(i%n==0)
        {
            printf(" %d ",i);
        }
    }
    return 0;
}