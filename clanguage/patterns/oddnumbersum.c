#include<stdio.h>
int main()
{
    int i,j,k,m,n,even=0,odd=0,sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
         if(i%2!=0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}