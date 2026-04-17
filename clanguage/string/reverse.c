#include<stdio.h>
int main()
{
    int i,j,l=0,rev;
    char a[20];
    char b[20];
    gets(a);
    gets(b);
    while(a[i]!='\0')
    {
        l++;
    }
    for(j=l-1,i=0;j>=0;j--,i++)
    {
        a[i]=b[j];
    }
    a[i]='\0';
    printf("%s",a);

    
    printf("%d",b);
    return 0;
}