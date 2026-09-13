#include <stdio.h>

int main(void) {
    unsigned int a = 13;   // Binary: 1101
    unsigned int b = 7;    // Binary: 0111

    printf("a = %u\n", a);
    printf("b = %u\n\n", b);

    printf("a & b = %u\n", a & b);  // Bitwise AND: keeps only bits set in both a and b
    printf("a | b = %u\n", a | b);  // Bitwise OR: keeps bits set in either a or b
    printf("a ^ b = %u\n", a ^ b);  // Bitwise XOR: keeps bits that differ between a and b
    printf("~a = %u\n", ~a);        // Bitwise NOT: flips all bits of a
    printf("a << 1 = %u\n", a << 1); // Left shift: shifts bits of a left by 1 position
    printf("a >> 1 = %u\n", a >> 1); // Right shift: shifts bits of a right by 1 position
    printf("a & 1 = %u\n", a & 1u);  // Bitwise AND with 1: checks if the least significant bit is set

    return 0;
}
