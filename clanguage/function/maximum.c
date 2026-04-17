#include<stdio.h>
int max(int a,int b,int c)
{
    if(a>b)
    
    {
        if(a>c)
        {
            printf("%d is maximum",a);
        }
        else
        {
            if(b>c)
            {
                printf("%d is max",b);
            }
            else
            {
                printf("%d is max",c);
            }
        }
    }
}
int main(int a,int b,int c)
{
    printf("enter the number");
    scanf("%d %d %d",&a,&b,&c);
    max(a,b,c);
}