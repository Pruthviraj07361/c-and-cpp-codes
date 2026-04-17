#include<stdio.h>
int main()
{
    int n, sum, digit, temp;

    for(n = 1; n <= 1000; n++)
    {
        temp = n;
        sum = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if(sum == n)
        {
            printf("%d is an Armstrong number\n", n);
        }
    }

    return 0;
}