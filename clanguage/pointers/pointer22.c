#include<stdio.h>
int main()
{
    int *p;
    int (*ptr)[5];
    int a[5];

    p = a;        // same as &a[0]
    ptr = &a;     // pointer to whole array

    printf("%u\t%u\n", p, ptr);

    p++;          // moves by 4 bytes (1 int)
    ptr++;        // moves by 20 bytes (5 ints)

    printf("%u\t%u\n", p, ptr);

    return 0;
}