#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    fp = fopen(argv[1], "r");
    if (fp == NULL){
        fprintf(stderr,'%s\n', strerror(errno));
        return errno;
    }
    printf("file exits\n");
    fclose(fp);

    return 0;

}