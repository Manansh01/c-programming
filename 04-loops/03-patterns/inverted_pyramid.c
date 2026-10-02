#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        return 1;
    }

    for (int row = rows; row >= 1; --row) {
        for (int space = 0; space <= rows - row - 1; ++space) {
            putchar(' ');
        }
        for (int star = 1; star <= 2 * row - 1; ++star) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}