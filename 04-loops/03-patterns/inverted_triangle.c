#include <stdio.h>

int main(void) {
    int rows;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        return 1;
    }

    for (int i = rows; i > 0; --i) {
        for (int j = i; j > 0; --j) printf("* ");
        printf("\n");
    }

    return 0;
}