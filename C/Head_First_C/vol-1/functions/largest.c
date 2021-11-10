#include<stdio.h>

int largest(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int greatest = largest(100,10000);
    printf("%i is the larges number\n", greatest);
    return 0;
}
