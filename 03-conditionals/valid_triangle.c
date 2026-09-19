#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("These sides can form a triangle.\n");

        if (a == b && b == c) {
            printf("Type: Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Type: Isosceles\n");
        } else {
            printf("Type: Scalene\n");
        }
    } else {
        printf("These sides cannot form a triangle.\n");
    }

    return 0;
}
