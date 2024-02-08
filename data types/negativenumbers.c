#include <stdio.h>

int main(void) {

    //0000 0110 - binary representation of the number 6
    char a = 6;

    // 0000 0000 - 0, 1111 1111 - 0
    //one's complement -127 - 0, 0 - 127 (0 -127 - positive numbers; 128 - 255 are negative)
    //1111 1001 - -6 in one's complement representation

    //two's complement
    //1111 1001 - one's complement of 6
    // 1111 1010 - adding one to one's complement

    char b = 250;
    printf("%d\n", b);

    //sign magnitude representation -127 - 0, 0 - +127
    //0000 0110 - +6
    //1000 0110 - -6





    return 0;
}