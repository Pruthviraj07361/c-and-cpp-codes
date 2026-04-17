#include<stdio.h>
int hello(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else{
        return n*hello(n-1);
    }
    

}
int main(int n)
{

    printf("enter the number");
    scanf("%d",&n);
    hello(n);
    printf("%d",hello(n));
    return 0;
}