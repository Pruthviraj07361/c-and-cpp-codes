/* when we difine pointer to pointer the pointer is */
#include<stdio.h>
int main()
{
      int x=10;
      int *ptr2;
      int **ptr1;
      ptr2=&x;
      ptr1=&ptr2;
      printf("%d\n",x);
      printf("%d\n",*ptr2);
      printf("%d\n",**ptr1);
      printf("%u\n",ptr2);
      printf("%u\n",ptr1);
      printf("%u\n",&ptr2);
      printf("%u",&ptr1);
}