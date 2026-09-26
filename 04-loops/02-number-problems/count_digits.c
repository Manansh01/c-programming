 #include <stdio.h>

int main(void)
{
	long long num;
	int digit = 0;

	printf("Enter a number: ");
	scanf("%lld", &num);

	if (num < 0) {
		num = -num;
	}

	do {
		digit++;
		num /= 10;
	} while (num != 0);

	printf("Number of digits: %d\n", digit);
	return 0;
}
