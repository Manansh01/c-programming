#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    if (scanf("%d %c %d", &num1, &op, &num2) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
                return 1;
            }
            printf("%d\n", num1 / num2);
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulo by zero.\n");
                return 1;
            }
            printf("%d\n", num1 % num2);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    return 0;
}
