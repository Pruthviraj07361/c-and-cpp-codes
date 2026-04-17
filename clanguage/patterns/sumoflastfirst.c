#include<stdio.h>
int main()
{
    int j, last, first, digit, sum, temp;

    scanf("%d", &j);

    temp = j;              // copy of number

    last = j % 10;         // last digit

    while(temp != 0)
    {
        digit = temp % 10;
        first = digit;
        temp = temp / 10;
    }

    sum = first + last;

    printf("%d", sum);

    return 0;
}