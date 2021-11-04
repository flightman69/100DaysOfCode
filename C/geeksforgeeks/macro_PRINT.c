#include <stdio.h>
//The macros can be written in multiple lines using '\'. The last line doesn't need to have '\'.
#define PRINT(i, limit) while (i < limit) \
	{\
		printf("GeeksQuiz\n"); \
		i++; \
	}

int main()
{
	int i =0;
	PRINT(i ,3);
	return 0;
}
