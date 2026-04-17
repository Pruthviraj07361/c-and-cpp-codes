#include<stdio.h>
int main()
{
    int i,j,k,m,n,even=0,odd=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            even++;
        }
        else
        {
            printf("%d\n",i);
            odd++;
        }
    }
    printf("%d\n",even);
    printf("%d\n",odd);
    return 0;
}