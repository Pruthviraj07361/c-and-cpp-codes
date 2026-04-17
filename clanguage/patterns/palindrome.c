#include<stdio.h>
int main()
{
    int i,rev=0,s,n;
    scanf("%d",&n);
    s=n;
    while(n!=0)
    {
        rev=rev*10;
        rev=rev+(n%10);
        n=n/10;
    }
    printf("this is rev %d",rev);
    if(s==rev)
    {
        printf("this number is palindrome");
    }
    else
    {
        printf("this is not palidrome");
    }
    return 0;


}