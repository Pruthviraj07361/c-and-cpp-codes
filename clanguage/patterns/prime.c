#include<stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if((n%i)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0){
    printf("it is prime");
    }
    else
    {
    printf("it is odd");
    }
    return 0;
}