#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=60;i++)
    {
        if(i%3==0)
        {
            if(i%5==0)
            {
                printf("FizzBuzz");
            }
            else
            {
                printf("fizz");
            }
        }
        else if(i%5==0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d",i);
        }
        printf("\n");    
    }
    return 0;
}