//pass by value means actual parameter values are passed on to formal parameters  
//and they won't affect the value of actual parameters out side the function
#include <stdio.h>

int increment(int n)
{
    return n +10;
}

int main()
{
    int a = 10;
    printf("Actual value of a is %d\n", a);
    printf("Value of a inside the function: %d\n",increment(a));
    printf("Value of a outside the fucntion after the functuion called is :%d\n", a);
    puts("The value is  unaltered because it's a pass by value function");
    return 0;
}