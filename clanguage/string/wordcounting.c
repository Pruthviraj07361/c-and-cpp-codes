#include<stdio.h>
int main()
{
    char a[20];
    char b[20];
    int i,l;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            l++;
        }

    }
    printf("%d",l);
    return 0;
}