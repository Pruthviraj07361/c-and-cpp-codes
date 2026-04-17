#include<stdio.h>
int main()
{
    int i,j,l;
    char a[20];
    char b[20];
    gets(a);
    gets(b);
    while(a[i]!='\0')
    {
        l++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    printf("%d",a);

    
    printf("%d",b);
    return 0;
}