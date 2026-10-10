#include <stdio.h>

int main() {
    int start = 1, end;

    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    if (end <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Perfect numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        int sum = 0;

        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
