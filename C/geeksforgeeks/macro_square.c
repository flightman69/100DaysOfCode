#include <stdio.h>

static inline int square(int x) { return x*x;}

int main()
{
	int x = 36/square(6);
	printf("%d\n", x);
	return 0;
}

