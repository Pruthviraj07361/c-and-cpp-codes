#include<stdio.h>
int c;
int sub(int a ,int b)
{

   printf("%d",a-b);    
}
int div(int a,int b)
{
    if(b==0)
    {
    printf("do not use zero");

    }
    else
    {
        printf("%d",a/b);
    }
}
int mul(int a,int b)
{
    printf("%d",a*b);
}
int addition(int a,int b)
{
    printf("adition %d",a+b);

}
int main(int a,int b)
{

    printf("1. addition\n");
    printf("2.subtraction\n");
    printf("3.mul\n");
    printf("4.div\n");
    printf("enter your two number");
    scanf("%d",&a);
    printf("enter your seciond choice");
    scanf("%d",&b);
    printf("enter your choice");
    scanf("%d",&c);
    if(c==1)
    {
        addition(a,b);
    }
    else if(c==2)
    {
        sub(a,b);
    }
    else if(c==3)
    {
        div(a,b);
    }
    else if(c==4)
    {
        mul(a,b);
    }
    else
    {
        printf("not valid");
    }
}