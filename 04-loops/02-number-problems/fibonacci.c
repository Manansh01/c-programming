
#include <stdio.h>

int main(void)
{
	int n;
	unsigned long long first = 0, second = 1, next;

	printf("Enter the number of terms: ");
	scanf("%d", &n);

	printf("Fibonacci sequence: ");
	for (int i = 0; i < n; i++) {
		printf("%llu", first);

		if (i < n - 1) {
			printf(" ");
		}

		next = first + second;
		first = second;
		second = next;
	}

	printf("\n");
	return 0;
}
