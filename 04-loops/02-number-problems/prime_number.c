
#include <stdio.h>

int main(void)
{
	int num;
	int is_prime = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num < 2) {
		is_prime = 0;
	} else {
		for (int divisor = 2; divisor <= num / divisor; divisor++) {
			if (num % divisor == 0) {
				is_prime = 0;
				break;
			}
		}
	}

	(is_prime) ? printf("%d is a prime number.\n", num)
               : printf("%d is not a prime number.\n", num);
	
	return 0;
}
