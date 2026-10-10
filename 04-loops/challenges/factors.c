#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter a positive integer: ");
	if (scanf("%d", &number) != 1 || number <= 0) {
		printf("Please enter a positive integer.\n");
		return 1;
	}

	printf("Factors of %d: ", number);
	for (int factor = 1; factor <= number; factor++) {
		if (number % factor == 0) {
			printf("%d ", factor);
		}
	}

	return 0;
}
