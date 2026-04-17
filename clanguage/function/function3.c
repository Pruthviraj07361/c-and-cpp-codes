#include<stdio.h>

void printline()

{
     int a,i;
     printf("enter the value of a");
     scanf("%d",&a);
     printf("%d",a);
     for(i=1;i<=10;i++)
     {
          printf("%d X %d= %d\n",i,a,a*i);
     }    

}
int main()
{
    printline();
    return 0; 
}
