#include <stdio.h>

int main(void) {
    unsigned int a = 12;  // 1100
    unsigned int b = 10;  // 1010

    printf("a = %u, b = %u\n", a, b);
    printf("a & b = %u\n", a & b);   // 1000 = 8
    printf("a | b = %u\n", a | b);   // 1110 = 14
    printf("a ^ b = %u\n", a ^ b);   // 0100 = 4
    printf("~a = %u\n", ~a);         // bitwise NOT (depends on int size)
    printf("a << 2 = %u\n", a << 2); // 110000 = 48
    printf("b >> 1 = %u\n", b >> 1); // 0101 = 5

    unsigned int mask = 0b00001111;
    printf("a & mask = %u\n", a & mask); // lower 4 bits

    return 0;
}
