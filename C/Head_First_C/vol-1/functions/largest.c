#include<stdio.h>

int largest(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int greatest = largest(500,200);
    printf("%i is the largest number\n", greatest);
    return 0;
}
