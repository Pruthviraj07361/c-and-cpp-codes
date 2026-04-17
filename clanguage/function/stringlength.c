#include<stdio.h>
#include<string.h>
char str[20];
int l;
int len(str);
int len(str)
{
    l=strlen(str);
}
int main(char s[20])
{
    printf("ENTER THe string");
    gets(str);
    len(str);
    printf("%d",l);

}