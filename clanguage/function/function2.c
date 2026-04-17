#include<stdio.h>
/* void means the function type is void  so return type or statement not required
second void means no parameters so we can put empty bracket or void*/
void printline(void)

{
     int a;
     printf("enter the value of a");
     scanf("%d",&a);
     printf("%d",a);    

}
int main()
{
    printline();
    return 0; 
}
