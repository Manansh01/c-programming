#include <stdio.h>

int main(void)
{
	int fst, snd;

	printf("Enter two integers: ");
	scanf("%d %d", &fst, &snd);

	while (snd != 0) {
		int remainder = fst % snd;
		fst = snd;
		snd = remainder;
	}

	printf("GCD = %d\n", fst);
	return 0;
}
