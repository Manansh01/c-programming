#include <stdio.h>

int main() {
    int num, org, rev = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    org = num;

    while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }

    if (org == rev) {
        printf("%d is a palindrome number.\n", org);
    } else {
        printf("%d is not a palindrome number.\n", org);
    }

    return 0;
}
