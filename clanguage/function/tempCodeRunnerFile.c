#include<stdio.h>
int i,len=0;
int str(char *s[20])
{
    
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    printf("%d",len);
}
int main(char *s[20])
{
    printf("ENTER THe string");
    gets(s);
    str(s[20]);

}