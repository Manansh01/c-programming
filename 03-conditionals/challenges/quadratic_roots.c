#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation because a = 0.\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("The roots are real and distinct.\n");
    } else if (discriminant == 0) {
        printf("The roots are real and equal.\n");
    } else {
        printf("The roots are complex and distinct.\n");
    }

    return 0;
}
