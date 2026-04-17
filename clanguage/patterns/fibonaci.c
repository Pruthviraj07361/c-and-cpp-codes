#include<stdio.h>
int main()
{
   int k,i,j,a=1,b=1;
   scanf("%d",&k);
   printf("%4d %4d",a,b);
   for(i=1;i<=(k-2);i++)
   {
     k=a+b;
     printf("%4d",k);
     a=b;
     b=k;

   }
   return 0;
}