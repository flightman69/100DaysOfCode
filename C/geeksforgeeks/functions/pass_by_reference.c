//pass by reference takes the address of the actual parameter and changes it using pointer formal parameter
#include <stdio.h>

void fun(int *ptr)
{
    *ptr = 30; 
}

int main()
{
    int a = 10;
    printf("The value of a before pass-by-reference function is: %d\n", a);
    fun(&a);
    printf("The value of a after the function outside the function is: %d\n", a);
    return 0;
}
