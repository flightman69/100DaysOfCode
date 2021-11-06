// C program to illustrate \OOO escape sequence
#include <stdio.h>
int main(void)
{
    // we are using \OOO escape sequence, here 
    // each O in "OOO" is one to three octal 
    // digits(0....7).
    char* s = "A\0725";
    printf("%s", s);
    return 0;
}