#include<stdio.h>
int main()
{
    int x=10,y=5;
    swap(x,y);
    printf("After swappping a=%d,b=%d",x,y);
    return 0;

}
void swap(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("a=%d,b=%d",a,b);

    
}
