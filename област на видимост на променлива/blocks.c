#include <stdio.h>

int main(void) {

    {
        int a = 10;
        printf("%d\n", a);
    }
    {
        int a = 15;
        printf("%d", a);
    }

    return 0;
}