#include <stdio.h>

#define PI 3.14159
#define MAX_SCORE 100

int main(void) {
    const int DAYS_IN_WEEK = 7;
    const float GRAVITY = 9.8f;

    int age = 25;
    char grade = 'A';
    float radius = 5.0f;
    float area = PI * radius * radius;

    printf("Integer constant: %d\n", 42);
    printf("Character constant: %c\n", 'Z');
    printf("Floating constant: %.2f\n", 3.14);
    printf("Macro constant PI: %.5f\n", PI);
    printf("const int DAYS_IN_WEEK: %d\n", DAYS_IN_WEEK);
    printf("const float GRAVITY: %.1f\n", GRAVITY);
    printf("Area of circle: %.2f\n", area);
    printf("MAX_SCORE: %d\n", MAX_SCORE);

    // age = 30; // allowed: age is not a constant
    // DAYS_IN_WEEK = 8; // error: assignment to read-only variable

    printf("Age: %d, Grade: %c\n", age, grade);

    return 0;
}
