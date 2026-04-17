#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int val = i % 2;  // starting value

        for(j=1;j<=i;j++)
        {
            printf("%d", val);
            val = 1 - val;   // toggle between 0 and 1
        }

        printf("\n");
    }

    return 0;
}