#include <stdio.h>

#define SQUARE(X) X * X
#define SQUARE_SAFE(X) ((X) * (X))
#define ORDER(FIRST, SECOND) SECOND; FIRST;

int main (void) {

    printf("Square 1: %d\n", SQUARE_SAFE(2 + 3));
    printf("Square 2: %d\n", SQUARE(2 + 3));

    ORDER(printf("Hello"), printf("World"));

    return 0;
}