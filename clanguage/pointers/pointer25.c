#include<stdio.h>
int change(int *p)
{
    *p=*p+10;
}
int main()

{
    int x;
    x=90;
    change(&x);
    printf("%d\n",x);
}

