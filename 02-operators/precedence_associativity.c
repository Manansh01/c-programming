#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2, x = 10, y = 20, z = 30;

    printf("Operator precedence example:\n");
    printf("a + b * c = %d\n", a + b * c);      // multiplication has higher precedence than addition
    printf("(a + b) * c = %d\n", (a + b) * c);  // parentheses force the order

    printf("\nAssociativity example:\n");
    printf("a / b * c = %d\n", a / b * c);      // same precedence, evaluated left to right
    printf("a - b - c = %d\n", a - b - c);      // same precedence, evaluated left to right

    printf("\nAssignment associativity:\n");
    printf("x = y = z => x = %d, y = %d, z = %d\n", x = y = z, y, z);

    return 0;
}
