#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    
    for(i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}