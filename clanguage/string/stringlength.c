#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,len=0;
    printf("ENTER THe string");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    printf("%d",len);
    return 0;
}  