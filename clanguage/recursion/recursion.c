#include<stdio.h>
int b=5;
int hi(int n)
{
    b++;
   if(n<=0)
   {
    printf("bye");
   }
   else
   {
    printf("hiii\n");
    hi(n-1);
   }

}
int main(int n)
{
   int x;
   printf("enter the number ");
   scanf("%d",&x);
   hi(x);
   printf("%d",b);
   return 0;

}