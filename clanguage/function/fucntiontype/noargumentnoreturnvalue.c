#include<stdio.h>
void sum()   
{
    int a,b,sum=a+b;
    printf("enter the value of the a and b");
    scanf("%d %d",&a,&b);
    printf("%d + %d= %d ",a,b,sum);
}
int main()
{
    sum();
    return 0;
}