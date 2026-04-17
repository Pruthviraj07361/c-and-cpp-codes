/* pointer and string codess*/
#include<stdio.h>
int main()
{
    char str[20],*pt;
    int i=0;
    printf("enter the string:");
    gets(str);
    pt=str;
    while(*pt!='\0')
    {
        i++;
        pt++;
    }
    printf("length of string:%d",i);
    return 0;
}