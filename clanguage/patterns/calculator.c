#include<stdio.h>
int main()
{
    int a,b,c,d,i;


    for(d=1;d<=3;d++)    
    {
        printf("enter the two number and choice");
        scanf("%d\n",&a);
        scanf("%d\n",&b);
        
        printf("enter the value of i");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            printf("sum %d",a+b);
            break;
        case 2:
            printf("sub %d",a-b);
            break;
        case 3:
            printf("mul %d",a*b);
            break;
        case 4:
            printf("div %d",a/b);
            break;       
        default:
            break;
        }
        printf("\n");
    }
    return 0;
}