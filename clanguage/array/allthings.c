
#include<stdio.h>
int main()
{
    int max, min, sum = 0, i, a[10];

    // Input
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(i = 0; i < 10; i++)
    {
        sum = sum + a[i];

        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", sum/10);

    return 0;
}
