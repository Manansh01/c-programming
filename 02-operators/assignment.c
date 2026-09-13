#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    a = b;           // assignment operator
    printf("a = %d\n", a);

    a += 5;          // compound assignment operator
    printf("a after a += 5 = %d\n", a);

    return 0;
}
