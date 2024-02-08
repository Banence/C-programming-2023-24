#include <stdio.h>

#define LINUX
#define OS_VERSION 2

int main (void) {

    #ifdef LINUX
    printf("We are under Linux\n");
    #endif
    

    #if defined LINUX
    printf("We are under Linux\n");
    #endif

    #if defined LINUX && defined OS_VERSION
    printf("We are under Linux with version 2\n");
    #endif

    return 0;
}