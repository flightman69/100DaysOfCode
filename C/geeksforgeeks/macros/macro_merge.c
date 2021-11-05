#include <stdio.h>
//This concates the given data
#define merge(a,b) a##b
int main()
{
printf("%d\n", merge(12, 34));
return 0;

}
