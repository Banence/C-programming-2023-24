#include <stdio.h>

#define BUFFER_SIZE 1024
#define OS_VERSION 2

int main (void) {

    #if BUFFER_SIZE > 512
    printf("This is OS with buffer size greater than 512\n"); // --> During preprocessing
    #endif

    #if BUFFER_SIZE > 2048 && OS_VERSION == 2
    printf("This is OS with buffer size greater than 512 and OS version is 2\n"); // --> During preprocessing
    #endif

    int buffersize = 1024;

    if (buffersize > 512) {
        printf("This is OS with buffer size greater than 512\n"); // --> During compiling
    }

    if (buffersize > 2048) {
        printf("This is OS with buffer size than 2048\n"); // --> During compiling
    }

    return 0;
}