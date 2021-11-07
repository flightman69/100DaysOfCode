#include <stdio.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int main()
{
    int x = 170, y = 20;
    int m = max(x,y);
    printf("The max number is %d\n", m);
}