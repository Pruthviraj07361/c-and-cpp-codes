#include<stdio.h>
int main()
{
    int i,e,s;
    printf("enter the starting and ending value");
    scanf("%d %d",&s,&e);
    for(i=s;i<=e;i++)
    {
        if(i%3==0)
        {
            if(i%5==0){
               printf("fizz buzz");
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