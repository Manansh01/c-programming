#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 0;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("(a > 0) && (b > 0) = %d\n", (a > 0) && (b > 0));
    printf("(a > 0) && (c > 0) = %d\n", (a > 0) && (c > 0));
    printf("(a > 0) || (c > 0) = %d\n", (a > 0) || (c > 0));
    printf("!(a > 0) = %d\n", !(a > 0));

    // Example
    int isLoggedIn = 1;
    int hasValidToken = 1;
    int isAdmin = 0;

    printf("\nReal-life example:\n");
    printf("isLoggedIn = %d, hasValidToken = %d, isAdmin = %d\n", isLoggedIn, hasValidToken, isAdmin);
    printf("Can access dashboard? %d\n", (isLoggedIn && hasValidToken) || isAdmin);

    return 0;
}
