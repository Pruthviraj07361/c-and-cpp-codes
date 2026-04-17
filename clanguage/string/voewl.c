#include<stdio.h>
int main()
{
    char a[20];
    char b[20];
    int i,l;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            l++;
        }

    }
    printf("%d",l);
    return 0;
}