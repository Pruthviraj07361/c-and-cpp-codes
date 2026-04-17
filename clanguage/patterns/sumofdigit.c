#include<stdio.h>
int main()
{
    int digit,n,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        rev=rev+digit;
        n=n/10;

    }
    printf("%d",rev);
    return 0;
}