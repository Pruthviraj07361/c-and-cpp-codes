#include<stdio.h>
int main()
{
    int a[10], i, max;

    // Input array elements
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    // Assume first element is maximum
    max = a[0];

    // Find maximum
    for(i = 1; i < 10; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    // Output
    printf("Maximum element = %d", max);

    return 0;
}