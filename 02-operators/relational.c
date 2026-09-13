#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int x = 5, y = 7, z = 5;

    // Basic relational operators
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b : %d\n", a <= b);
    printf("a >= b : %d\n", a >= b);

    // Greater and smaller of two numbers
    printf("Greater of %d and %d is: %d\n", a, b, a > b ? a : b);
    printf("Smaller of %d and %d is: %d\n", a, b, a < b ? a : b);

    // Equal and not equal
    int p = 12, q = 12;
    printf("p == q : %d\n", p == q);
    printf("p != q : %d\n", p != q);

    // Compare three numbers using relational operators
    printf("x > y && x > z : %d\n", x > y && x > z);
    printf("x < y && x < z : %d\n", x < y && x < z);

    // Maximum and minimum of three numbers
    int max3 = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    int min3 = (x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z);

    printf("Maximum of %d, %d and %d is: %d\n", x, y, z, max3);
    printf("Minimum of %d, %d and %d is: %d\n", x, y, z, min3);

    return 0;
}
