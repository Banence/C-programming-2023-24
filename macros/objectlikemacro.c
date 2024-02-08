#include <stdio.h>

#define MAX 100
#define HELLO "Niggr"
#define PRINT_HELLO printf("Hello, World!\n");
#define SIZE 6
#define ELEMENTS 1, 2, 3, 4, 5, 6
#define PRINT printf("%d\n", array[i]);
#define PRINT_ARRAY for (int i = 0; i < SIZE; i++) { \
                        PRINT \
                    } //Macro chaining


int main (void) {

    printf("%d\n", MAX);
    printf("%s\n", HELLO);
    PRINT_HELLO;

    int array[SIZE] = {ELEMENTS};
    PRINT_ARRAY
        

    return 0;
}