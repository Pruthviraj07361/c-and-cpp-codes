#include<stdio.h>

void printNumbers(int n)
{
    if(n > 10)   // Base condition
        return;

    printf("%d ", n);   // Print first
    printNumbers(n + 1); // Recursive call
}

int main()
{
    printNumbers(1);
    return 0;
}