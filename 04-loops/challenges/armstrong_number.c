#include <stdio.h>
#include <math.h>

static long long is_armstrong(long long number)
{
    int digits = 0;
    int sum = 0;
    int value = number;

    for (int temp = value; temp > 0; temp /= 10) {
        digits++;
    }

    for (int temp = value; temp > 0; temp /= 10) {
        int digit = temp % 10;
        int power = 1;

        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
    }

    return sum == number;
}

int main(void)
{
    int limit;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &limit) != 1 || limit < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Armstrong numbers from 0 to %d are:\n", limit);

    int found = 0;
    for (long long number = 0; number <= limit; number++) {
        if (is_armstrong(number)) {
            printf("%lld ", number);
            found = 1;
        }
    }

    if (!found)
        printf("None");
    printf("\n");
    return 0;
}