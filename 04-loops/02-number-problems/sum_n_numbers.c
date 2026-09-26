#include <stdio.h>

int main(void)
{
	int n;
	long long sum = 0;

	printf("Enter a positive integer: ");
	if (scanf("%d", &n) != 1 || n < 1) {
		printf("Please enter a positive integer.\n");
		return 1;
	}

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("Sum of numbers from 1 to %d is %lld\n", n, sum);
	return 0;
}
