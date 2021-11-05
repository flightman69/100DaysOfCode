#include <stdio.h>
#define get(a) #a
int main()
{
	//'#' is used to convert a token(argument) to string literal
	//GeeksQuiz is changed to "GeeksQuiz"
	printf("%s\n", get(GeeksQuiz));
}

