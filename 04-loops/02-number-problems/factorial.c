 #include <stdio.h>

int main(void)
{
	int numb;
	unsigned long long factorial = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &numb);

	if (numb < 0) {
		printf("Factorial is not defined for negative numbers.\n");
		return 1;
	}

	for (int i = 1; i <= numb; i++) {
		factorial *= i;
	}

	printf("%d! = %llu\n", numb, factorial);
	return 0;
}
