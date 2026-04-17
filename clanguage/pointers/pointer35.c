#include<stdio.h>
#include<string.h>
int stringln(char *p)
{
    int count=0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}
int main()
{
    char str[20];
    int length;
    printf("Enter a string");
    gets(str);
    length=strlen(str);
    printf("length=%d",length);
}