#include<stdio.h>
int main()
{
    int i,j,k,m,n,fac=1;
    scanf("%d",&n);
    while(n>=1)
    {
        fac=fac*n;
        n--;
    }
    printf("%d",fac);
    return 0;
}