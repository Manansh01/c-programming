#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Initial values: a = %d, b = %d\n", a, b);

    // Prefix increment: value is increased before use
    printf("Pre-increment: ++a = %d, a = %d\n", ++a, a);

    // Postfix increment: old value is used, then increased
    printf("Post-increment: b++ = %d, b = %d\n", b++, b);

    // Prefix decrement: value is decreased before use
    printf("Pre-decrement: --a = %d, a = %d\n", --a, a);

    // Postfix decrement: old value is used, then decreased
    printf("Post-decrement: b-- = %d, b = %d\n", b--, b);

    return 0;
}
