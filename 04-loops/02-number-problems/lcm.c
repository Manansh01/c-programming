#include <stdio.h>

int main(void)
{
	int fst, snd;

	printf("Enter two positive integers: ");
	if (scanf("%d %d", &fst, &snd) != 2 || fst <= 0 || snd <= 0) {
		printf("Please enter two positive integers.\n");
		return 1;
	}

	int lcm = fst > snd ? fst : snd;
	while (lcm % fst != 0 || lcm % snd != 0) {
		++lcm;
	}

	printf("LCM of %d and %d is %d\n", fst, snd, lcm);
	return 0;
}
