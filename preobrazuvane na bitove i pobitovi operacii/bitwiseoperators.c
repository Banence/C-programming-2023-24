#include <stdio.h>

int main(void) {

    //Assignment - =, +=, -=, /=, *=
    //Comparison operators - ==, >, <, >=, <=, !=
    //Arithmetic operators - +, -, *, /, %
    //Logical operators - &&, ||, !
    //Ternery operators - a < b ? a : b
    //Bitwise operators - &, |, ~, ^, <<, >>

    char a = 6;
    //0000 0110

    char b = 7;
    //0000 0111

    //Bitwise AND
    char c = a & b;
    //0000 0110
    //0000 0111
    //0000 0110

    //Bitwise OR
    char c1 = a | b;
    //0000 0110
    //0000 0111
    //0000 0111 6 | 7 == 7
    printf("c1: %d\n", c1);

    unsigned char 



    return 0;
}