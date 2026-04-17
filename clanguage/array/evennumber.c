#include<stdio.h>
int main()
{
    int i,sum=0,a[10],max=a[0];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
            if(a[i]>max)
            {
                max=a[i];
            }
        }

    }
    printf("%d\n",sum);
    printf("%d",max);
}
