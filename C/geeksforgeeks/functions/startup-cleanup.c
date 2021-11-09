#include <stdio.h>

void myStartupFun(void) __attribute__((constructor));

void myCleanupFun(void) __attribute__ ((destructor));

void myStartupFun(void){
    printf("My Startup Function before main()\n");
}

void myCleanupFun(void){
    printf("My Cleanup Funtion after main()\n");
}

int main(void)
{
    printf("Too young to die, Too beautiful to live \n");
    return 0;
}