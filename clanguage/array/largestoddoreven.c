#include<stdio.h>
int main()
{
    int i,a[10],n;
    int max=0,oddmax=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        else
        {
            if(a[i]>oddmax)
            {
                oddmax=a[i];
            }
        }
    }
    printf("this is%d ",oddmax);
    printf("this is%d",max);
    return 0;
}