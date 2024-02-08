#include <stdio.h>

int main(void) {

    size_t a[3] = {1, 2, 3};
    printf("Size of array in bytes: %zu\n", a);

    int arrlen = sizeof(a) / sizeof(a[0]);
    printf("Length of the array: %d\n", arrlen);




    return 0;
}