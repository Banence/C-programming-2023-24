#include <stdio.h>

#define LINUX

int main (void) {


    #ifdef WINDOWS
    printf("We under Windows\n");
    #elif defined LINUX
    printf("We are under Linux\n");
    #else
    printf("We are on some other OS\n");
    #endif

    return 0;
}