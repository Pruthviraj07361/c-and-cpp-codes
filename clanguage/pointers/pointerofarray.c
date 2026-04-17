#include<stdio.h>
int main()
{
    int *p[3];
    int a=4,b=5,c=10,i;

    p[0]=&a;
    p[1]=&b;
    p[2]=&c;

    printf("elemetns \t  value \t address\n");
    for(i=0;i<3;i++)
    {
        printf("p[%d] %d \t\t  %d \t  %u\n",i,*p[i],p[i]);

    }
    return 0;
}