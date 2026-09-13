#include <stdio.h>

int main() {
    int num1 = 9;
    int num2 = 2;

    // Implicit conversion: integer division would discard decimals
    int result1 = num1 / num2;
    printf("Without casting: %d / %d = %d\n", num1, num2, result1);

    // Explicit type casting: convert one operand to float before division
    float result2 = (float)num1 / num2;
    printf("With casting: %d / %d = %.2f\n", num1, num2, result2);

    // Casting to a smaller data type
    double value = 65.75;
    int ascii = (int)value;
    printf("Double to int cast: %.2f -> %d\n", value, ascii);

    return 0;
}
