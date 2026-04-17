
#include<string.h>
int main()
{
    char s[20],t[20],merge;
    int i,len=0;
    printf("ENTER THe string");
    gets(s);
    gets(t);
    for(i=0;s[i]!='\0';i++)
    {
        for(i=0;t[i]!='\0';i++)
        {
            merge=s[i]+t[i];
        }
    }
    printf("%d",merge);
    return 0;