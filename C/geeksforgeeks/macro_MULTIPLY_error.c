#include <stdio.h>
#define MULTIPLY(a,b) a*b
int main()
{
	//The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
	printf("%d\n", MULTIPLY(2+3, 3+5));
	return 0;
}
