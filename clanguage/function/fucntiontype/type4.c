/*with no argument and with return type function*/
#include<stdio.h>
void name()
{
    int a=30;
    int b=20,sum=a+b;
    printf("%d",sum);
    return sum;
    
}
int main()
{
    name();
    return 0;
}
