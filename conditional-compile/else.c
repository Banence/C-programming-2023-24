#include <stdio.h>

#define LINUX

int main (void) {

    #if defined WINDOWS
    printf("We are under windows\n");
    #else
    printf("We are not under windows\n");
    #endif


    #ifdef LINUX
    printf("We are under linux\n");
    #else
    printf("We are not under Linux\n");
    #endif

    return 0;
}