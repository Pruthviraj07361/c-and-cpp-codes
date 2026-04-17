#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(i=n;i<=m;i++)
    {
        if(i%k==0)
        {
            printf("%d",i);
        } 
    }
    return 0;
}