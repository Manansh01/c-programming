#include <stdio.h>

int main() {
    int num, marks;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
