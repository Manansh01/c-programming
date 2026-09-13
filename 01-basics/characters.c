#include <stdio.h>

int main() {
    char ch = 'A';
    char lower = 'a';

    printf("Character: %c\n", ch);
    printf("ASCII value of %c is %d\n", ch, ch);
    printf("Lowercase letter: %c\n", lower);

    ch = 'Z';
    printf("Updated character: %c\n", ch);

    return 0;
}