#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 3.50f;
    } else if (units <= 100) {
        bill = 50 * 3.50f + (units - 50) * 4.00f;
    } else if (units <= 200) {
        bill = 50 * 3.50f + 50 * 4.00f + (units - 100) * 5.50f;
    } else {
        bill = 50 * 3.50f + 50 * 4.00f + 100 * 5.50f + (units - 200) * 6.50f;
    }

    printf("Electricity bill: Rs. %.2f\n", bill);

    return 0;
}
