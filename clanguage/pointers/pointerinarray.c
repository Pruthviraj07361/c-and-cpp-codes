#include<stdio.h>
int main()
{
    int *p,sum=0,i,a[5];
    p=a;
    printf("enter elements of array");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    printf("elemnts value address000");
    for(i=0;i<5;i++)
    {
        printf("array elements =%d\n, array address= %u\n",p,p);
        sum=sum+*p;
        p++;
    }
    printf("this is sum %d",sum);
    return 0;
}