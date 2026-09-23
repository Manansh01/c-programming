#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("The sides must be positive numbers.\n");
        return 1;
    }

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("These sides cannot form a triangle.\n");
        return 0;
    }

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles triangle.\n");
    } else {
        printf("Scalene triangle.\n");
    }

    return 0;
}
