#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],t[20],merge;
    int i,j,len=0;
    printf("ENTER THe string");
    gets(s);
    gets(t);
    while(s[i]!='\0')
    {
        i++;
    }   
    while(t[j]!='\0')
    {
        s[i]=t[i];
        i++;
        j++;
    }
    s[i]='\0';
    printf("%s",s);
    return 0;
}