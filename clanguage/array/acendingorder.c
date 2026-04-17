#include<stdio.h>
int main()
{
    int a[10], i, j, temp;

    // Input
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sorting (Ascending)
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output
    printf("Sorted array (ascending):\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}