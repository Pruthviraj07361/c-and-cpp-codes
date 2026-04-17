#include<stdio.h>
int main()
{
    int x,y;
    int *ptr;
    x=10;
    ptr=&x;
    printf("%d\n",ptr);
    printf("%x\n",ptr);
    printf("%x\n",*ptr);
    printf("%d\n",*ptr);
    return 0;
}